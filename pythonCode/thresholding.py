import cv2

#Read a gray scale image or read a color image in gray scale format
inputImage = cv2.imread('../assets/putin.jpg', cv2.IMREAD_GRAYSCALE)

#Binary thresholding
th, binaryImage = cv2.threshold(inputImage, 100, 255, cv2.THRESH_BINARY)

#create windows for displaying images
cv2.namedWindow("input image", cv2.WINDOW_NORMAL)
cv2.namedWindow("thresholded image", cv2.WINDOW_NORMAL)

#displaying images
cv2.imshow("input image", inputImage)
cv2.imshow("thresholded image", binaryImage)

#Press esc on keyboard to exit the program
cv2.waitKey(0)

#close all the opened windows
cv2.destroyAllWindows()
