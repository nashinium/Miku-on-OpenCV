import cv2

img = cv2.imread("./media/Miku.png")
cv2.imshow("Picture", img)
cv2.waitKey(0)
cv2.destroyAllWindows()