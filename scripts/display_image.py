import sys
from pathlib import Path
import matplotlib.pyplot as plt
import cv2

if len(sys.argv) != 2:
    print(f"Error! Expected 1 argument, while {len(sys.argv)-1} given.") 
    exit()

img_fpath = sys.argv[1]

assert(Path(img_fpath).exists()), "Given image file path doesn't exist!"

# Read image from file
img = cv2.imread(img_fpath, flags=cv2.IMREAD_ANYCOLOR)

# if it is a color image
if (img.ndim == 3):
    # switch color channels since openCV load them as BGR
    img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
    
    plt.imshow(img)

else: # grayscale img
    plt.imshow(img, cmap="gray")

plt.show()
