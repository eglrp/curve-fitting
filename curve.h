#ifndef CURVE_H
#define CURVE_H

#include <string>
#include <iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <time.h>
#include "cv.h"
#include "highgui.h"
#include "curve.h"
#include <time.h>
#include <windows.h>
#include"opencv2/opencv.hpp"
using namespace std;
struct PointsXYZInt
{
	int x; 
	int y;
	int z;
	int index;
	int horizontal_angle;
	int intensity; 
	int ClassNum;
	int Distance;
	int Laser_Line_Number;
	int sensorCount;
	float Range_meter;
};


typedef struct _Feather
{
	int label;              // ��ͨ���labelֵ
	int area;               // ��ͨ������
	cv::Rect boundingbox;       // ��ͨ�����Ӿ��ο�
} Feather;
bool polynomial_curve_fit(std::vector<cv::Point2d>& key_point, int n, cv::Mat& A);

#endif