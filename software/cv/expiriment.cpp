#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv){
  if(argc != 2){
    printf("usage: DisplayImage.out <Image_Path>\n");
    return -1;
  }

  Mat img;
  img = imread(argv[1], 1);

  if(!img.data){
    printf("Image contains no data\n");
    return -1;
  }

  namedWindow("DisplayImage", WINDOW_AUTOSIZE);
  imshow("DisplayImage", img);

  Mat cropped_img(img, Rect(20,20,100,40));
  namedWindow("CroppedImage", WINDOW_AUTOSIZE);
  imshow("CroppedImage", cropped_img);

  waitKey(0);

  return 0;
};
