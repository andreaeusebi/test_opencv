#include "opencv2/core.hpp"
#include "opencv2/opencv.hpp"

int main(int argc, char * argv [])
{
    std::cout << "OpenCV version: "
              << CV_MAJOR_VERSION << "."
              << CV_VERSION_MINOR << "."
              << CV_VERSION_REVISION << std::endl;

    cv::Mat mat_1(100, 200, CV_8UC1, cv::Scalar(0));

    cv::cuda::GpuMat gpu_img_rgb;

    try
    {
        gpu_img_rgb.upload(mat_1);

        std::cout << "Congratulations! You have OpenCV installed with CUDA!" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';

        std::cout << "You don't have OpenCV installed with CUDA." << std::endl;
    }

    return 0;
}