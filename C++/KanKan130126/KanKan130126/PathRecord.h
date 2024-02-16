#pragma once
#include <iostream>  
using namespace std;
#include "Point.h"
#include <vector> 

//������߾��������е�
class PathRecord
{
public: 
	//������������е�Ԫ��
	void Clear(); 
	void AddPoint(const Point& p);//���һ����
	void AddPointLine(const Point& first,const Point& second);//���������ȷ����ֱ�������еĵ�
	void AddPoint(const Point& first,const Point& center1,const Point& second);
	void AddPoint(const Point& first,const Point& center1,const Point& center2,const Point& second);
	~PathRecord();
	Point* operator[](int index);
	int Size();
private:
	vector<Point*> pointVector;
};
 