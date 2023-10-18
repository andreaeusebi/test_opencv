#include "opencv2/core.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/imgproc.hpp"

int main(int argc, char * argv [])
{
    float kernel_data[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    
    float test1_source_data[9] = { 1, 1, 1,
                                   1, 1, 1,
                                   1, 1, 1};

    float test2_source_data[9] = { 1, 0, 0,
                                   0, 0, 0,
                                   0, 0, 0};

    float test3_source_data[9] = { 0, 0, 0,
                                   0, 0, 0,
                                   0, 0, 1};

    float test4_source_data[9] = { 0, 1, 0,
                                   1, 0, 1,
                                   0, 1, 0};

    cv::Mat source(3, 3, CV_32F, test1_source_data);
    cv::Mat kernel(3, 3, CV_32F, kernel_data);

    std::cout << "###### ----------- TEST 1 ----------- ######" << std::endl;

    std::cout << "Source type:" << source.type() << std::endl;
    std::cout << "Source:" << std::endl << source << std::endl << std::endl;
    std::cout << "Kernel type:" << kernel.type() << std::endl;
    std::cout << "Kernel:" << std::endl << kernel << std::endl << std::endl;

    cv::Mat output;

    cv::matchTemplate(source, kernel, output, cv::TM_CCORR);

    std::cout << "output type:" << output.type() << std::endl;
    std::cout << "output size:" << output.size() << std::endl;
    std::cout << "output:" << std::endl << output << std::endl << std::endl;

    std::cout << "###### ----------- TEST 2 ----------- ######" << std::endl;

    source = cv::Mat (3, 3, CV_32F, test2_source_data);

    std::cout << "Source type:" << source.type() << std::endl;
    std::cout << "Source:" << std::endl << source << std::endl << std::endl;
    std::cout << "Kernel type:" << kernel.type() << std::endl;
    std::cout << "Kernel:" << std::endl << kernel << std::endl << std::endl;

    cv::matchTemplate(source, kernel, output, cv::TM_CCORR);

    std::cout << "output type:" << output.type() << std::endl;
    std::cout << "output size:" << output.size() << std::endl;
    std::cout << "output:" << std::endl << output << std::endl << std::endl;

    std::cout << "###### ----------- TEST 3 ----------- ######" << std::endl;

    source = cv::Mat (3, 3, CV_32F, test3_source_data);

    std::cout << "Source type:" << source.type() << std::endl;
    std::cout << "Source:" << std::endl << source << std::endl << std::endl;
    std::cout << "Kernel type:" << kernel.type() << std::endl;
    std::cout << "Kernel:" << std::endl << kernel << std::endl << std::endl;

    cv::matchTemplate(source, kernel, output, cv::TM_CCORR);

    std::cout << "output type:" << output.type() << std::endl;
    std::cout << "output size:" << output.size() << std::endl;
    std::cout << "output:" << std::endl << output << std::endl << std::endl;

    std::cout << "###### ----------- TEST 4 ----------- ######" << std::endl;

    source = cv::Mat (3, 3, CV_32F, test4_source_data);

    std::cout << "Source type:" << source.type() << std::endl;
    std::cout << "Source:" << std::endl << source << std::endl << std::endl;
    std::cout << "Kernel type:" << kernel.type() << std::endl;
    std::cout << "Kernel:" << std::endl << kernel << std::endl << std::endl;

    cv::matchTemplate(source, kernel, output, cv::TM_CCORR);

    std::cout << "output type:" << output.type() << std::endl;
    std::cout << "output size:" << output.size() << std::endl;
    std::cout << "output:" << std::endl << output << std::endl << std::endl;

    return 0;
}