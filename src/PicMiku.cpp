#include <opencv2/opencv.hpp>

int main() {
    cv::Mat img;
    img = cv::imread("./media/Miku.jpg", 0);

    cv::imshow("Picture", img);
    cv::waitKey(0);

    return 0;
}