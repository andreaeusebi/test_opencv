#include "opencv2/core.hpp"
#include "opencv2/opencv.hpp"

int main(int argc, char * argv [])
{
    cv::Mat mat_original(100, 200, CV_8UC1, cv::Scalar(0));

    int vertical_shift {10};

    if (argc > 0)
    {
        mat_original = cv::imread(argv[1]);
        vertical_shift = std::stoi(argv[2]);
    }

    cv::Rect upper_rec(0, 0, mat_original.size().width, vertical_shift);
    cv::Rect lower_rec(0, vertical_shift, mat_original.size().width, mat_original.size().height - vertical_shift);

    cv::Mat upper_mat (mat_original, upper_rec);
    cv::Mat lower_mat (mat_original, lower_rec);

    // put lower mat over upper mat --> circular shift
    cv::Mat mat_array[] = {lower_mat, upper_mat};

    cv::Mat mat_shifted;
    cv::vconcat(mat_array, 2, mat_shifted);

    cv::imshow("Original", mat_original);
    cv::imshow("Circularly Shifted", mat_shifted);

    cv::waitKey(0);

    return 0;
}