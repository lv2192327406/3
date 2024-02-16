#pragma once 
#include <set>
#include "Point.h"
#include "Source.h"
#include "PathFind.h"
//����ж�-�ж������ֻ�����ͨ��
class CheckResult
{
	public:
		CheckResult();
		CheckResult(int _leftPoint);
		int LeftPoint() const;//����ʣ�µĵ�
		int LeftLinkLine();//�����ӵĵ����
		void SearchLeftLinkLine();//��ѯ�����ӵĵ����
		void SearchLeftPoint();//��ѯʣ�µĵ����
		bool Reduce2Point();//��������ʣ��ĵ� 
		bool IsSuccess();//�ж��Ƿ�ɹ�
		bool IsNoSolution();//�Ƿ����޽�
	private:
		int leftPoint;//ʣ�µĵ������ж��Ƿ����
		volatile int leftLinkLine;//�����ӵĵ���� �����ж��Ƿ����� 
		static const int Hundred=100;
};
