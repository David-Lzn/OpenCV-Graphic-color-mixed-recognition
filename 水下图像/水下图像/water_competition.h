#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <cmath>
#include <iostream>

using namespace cv;
using namespace std;


struct SimpleShapes {
	Mat img_src;
	Mat img_dst;
	Mat img_bw;
	vector<RotatedRect> rectangles;//��ת������
	vector<vector<Point>> triangles;//ȡ������
};

SimpleShapes Water_Shape(Mat, int);//���ظ���

double angleCos(Point, Point, Point);

void setLabel(Mat&, const string, vector<Point>&);

uchar* PictureKind(int, int, Mat);

uchar* Average(uchar*, uchar*, uchar*);