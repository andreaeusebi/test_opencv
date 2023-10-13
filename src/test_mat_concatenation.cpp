#include "opencv2/core.hpp"
#include "opencv2/opencv.hpp"

int main(int argc, char * argv [])
{
    cv::Mat mat_1(100, 200, CV_8UC1, cv::Scalar(0));
    cv::Mat mat_2(100, 200, CV_8UC1, cv::Scalar(255));

    if (argc > 0)
    {
        mat_1 = cv::imread(argv[1]);
        mat_2 = cv::imread(argv[2]);
    }
    

    cv::Mat mat_array[] = {mat_1, mat_2};
    
    cv::Mat mat_concat;

    cv::vconcat(mat_array, 2, mat_concat);

    cv::imshow("Mat 1", mat_1);
    cv::imshow("Mat 2", mat_2);
    cv::imshow("Mat Concatenated", mat_concat);

    cv::waitKey(0);

    return 0;
}