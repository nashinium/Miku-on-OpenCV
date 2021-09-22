import numpy as np
import cv2

cap=cv2.VideoCapture('./media/IevanPolkka.mp4')

while(cap.isOpened()):
    ret,frame=cap.read()

    cv2.imshow("Video",frame)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()