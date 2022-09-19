#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
using namespace std;
using namespace cv;

int main(int argc, char **argv)
{
    VideoCapture capture("视频路径");
    if (!capture.isOpened())
        return -1;
    // 循环显示每一帧
    while (true)
    {
        Mat pic; // 储存每一帧的画面
        capture >> pic;
        namedWindow("读取视频", WINDOW_FREERATIO);
        imshow("读取视频", pic);
        waitKey(50); // 停顿50ms后继续读取图片
    }
    return 0;
}