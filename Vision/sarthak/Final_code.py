import socket
import time
import cv2
from ultralytics import YOLO
import numpy as np

# Load the YOLOv8 model
model = YOLO("C:/Desktop/best.pt")

serverAddressPort=("192.168.141.7", 49001)
bufferSize=32

#create UDP socket
UDPClientSocket=socket.socket(family=socket.AF_INET, type=socket.SOCK_DGRAM)

#set up camera capture
# cv2.namedWindow('test')
# video=cv2.VideoCapture(0)
# Open the video file
cap = cv2.VideoCapture(0)

#send something
bytesToSend=bytearray([130,75,0,0,200,3])

#print(bytesToSend)

UDPClientSocket.sendto(bytesToSend, serverAddressPort)


 #find ball position
# Loop through the video frames
while cap.isOpened():
    # Read a frame from the video
    success, frame = cap.read()
    if success:
        # Run YOLOv8 inference on the frame
        results = model(frame)

        # Visualize the results on the frame
        annotated_frame = results[0].plot()
        for result in results:                                     # iterate results
            boxes = result.boxes.cpu().numpy()                     # get boxes on cpu in numpy
        for box in boxes:                                          # iterate boxes
            r = box.xyxy[0].astype(int)              # get corner points as int [x1,y1,x2,y2]   
                                                     ## get box coordinates in (top, left, bottom, right) format    
            x_min, y_min, x_max, y_max = r
            # Calculate center coordinates
            center_x = (x_max-x_min) / 2
            center_y = (y_max-y_min) / 2
            # Print the center coordinates
            print("Center:", center_x, center_y)
            print('Hi I am ball', r)                               # print boxes
            # Convert center coordinates to bytes
            center_x_1 = center_x / 256
            center_x_2 = center_x - center_x_1

            center_y_1 = center_y / 256 
            center_y_2 = center_y - center_y_1

            #send ball position to MicrolabBox
            #find ball position
            bytesToSend = bytearray([int(center_x_1), int(center_x_2), 0, 0, int(center_y_1), int(center_y_2)])
            UDPClientSocket.sendto(bytesToSend, serverAddressPort)
            #send ball position to MicrolabBox
            print(bytesToSend)

        # Display the annotated frame
        cv2.imshow("Ball detection started", annotated_frame)

        # Break the loop if 'q' is pressed
        if cv2.waitKey(1) & 0xFF == ord("q"):
            break
    else:
        # Break the loop if the end of the video is reached
        break



# Release the video capture object and close the display window
cap.release()
cv2.destroyAllWindows()



