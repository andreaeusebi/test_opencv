import matplotlib.pyplot as plt
import cv2

img = cv2.imread("/home/andrea/Downloads/aaaaa.png",
                 flags=cv2.IMREAD_ANYDEPTH)

plt.imshow(img, cmap="gray")

plt.show()