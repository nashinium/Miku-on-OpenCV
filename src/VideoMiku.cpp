#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int
main()
{
    VideoCapture cap("./src/media/IevanPolkka.mp4");
    if (!cap.isOpened()) {
        cout << "could not open the Video File." << endl;
        return -1;
    }
    while (true) {
        Mat frame;
        cap >> frame;
        if (frame.empty())
            break;

        imshow("ocv", frame);
        int k = waitKey(10);
        if (k == 27)
            break;
    }
    return 0;
}