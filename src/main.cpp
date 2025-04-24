#include<iostream>
#include "add.h"
#include <opencv2/opencv.hpp>
int main()
{
    std::cout<<add(10,20)<<std::endl;
    cv::Mat img=cv::imread("/home/sy/work/test/1.jpg");
    std::cout<<"hello word"<<std::endl;
    return 0;
}