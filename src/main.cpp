#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int
main(){
    char input;
    cout << "Select media type which you want to display... ('v' for "
            "video, 'p' for Picture)\n>> ";
    cin >> input;
    
    if(input=='p') {
        cv::Mat img;
        img = cv::imread("./src/media/Miku.png");

        cv::imshow("Picture", img);
        cv::waitKey(0);
    } else if(input=='v') {
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

            imshow("Video", frame);
            int k = waitKey(10);
            if (k == 27)
                break;
        }
    }else
        cout << "Invalid value. Program terminated...";
    return 0;
}