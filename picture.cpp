#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main(int argc, char **argv)
{
    Mat image = imread("/home/liu/图片/壁纸/test.jpeg", 1);
    if (image.empty())
    {
        cout << "未能找到该图片……" << endl;
        return -1;
    }
    namedWindow("测试", WINDOW_FREERATIO);
    imshow("测试", image);
    waitKey(0);
    return 0;
}