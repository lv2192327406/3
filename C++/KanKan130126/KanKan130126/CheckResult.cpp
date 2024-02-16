#include "CheckResult.h"

CheckResult::CheckResult():leftPoint(0),leftLinkLine(0)
{
	SearchLeftLinkLine();
	SearchLeftPoint();
}

CheckResult::CheckResult(int _leftPoint):leftPoint(_leftPoint)
{
	SearchLeftLinkLine();
}

int CheckResult::LeftPoint() const
{
	return leftPoint;
}

int CheckResult::LeftLinkLine() 
{
	if(leftLinkLine<=0)
	{
		SearchLeftLinkLine();
	}
	return leftLinkLine;
}

//��ѯ�����ӵĵ����
//ÿ�����������κε�������ӣ�������ӳɹ�leftLinkLine+1��������������뼯��Set�У�Set�е�Ԫ�ز������ڿ���
void CheckResult::SearchLeftLinkLine()
{
	set<int> list;//��ųɹ����ӵĵ�
	Point* first=NULL;
	Point* second=NULL;
	PathFind pathFind;
	int value1=0;
	int value2=0;
	for(int i=0;i<row;i++)
	{  
		//��ȡ��һ����
		for(int j=0;j<column;j++)
		{
			if(A[i][j]==ZERO)
			{
				continue;
			} 
			value1=i*Hundred+j;//����һ��Ψһ����
			if(list.find(value1)!=list.end())//���������ڼ����оͼ���ѭ��
			{
				continue;
			}
			first=new Point(i,j);
			break; 
		}
		if(first==NULL)
		{
			continue;
		}
		//��ȡ�ڶ����㣬���������Ӳ���
		for(int j=0;j<column;j++)
		{ 
			if(A[i][j]==ZERO)
			{
				continue;
			}
			value2=i*Hundred+j;//����һ��Ψһ����
			if(list.find(value2)!=list.end())//���������ڼ����оͼ���ѭ��
			{
				continue;
			} 
			if(A[first->X][first->Y]!=A[i][j])
			{
				continue;
			}
			second=new Point(i,j); 
			if(*first==*second)
			{
				continue;
			}
			bool isOK=pathFind.Search(*first,*second);
			if(!isOK)
			{
				continue;
			}
			//�ɹ�����
			delete first;
			first=NULL;
			delete second;
			second=NULL;
			list.insert(value1);
			list.insert(value2);  
			++leftLinkLine;
			break;
		}
		if(first!=NULL)
		{
			delete first;
			first=NULL;
		}
	}   
}

//��ѯʣ�µĵ����
void CheckResult::SearchLeftPoint()
{
	leftPoint=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(A[i][j]!=ZERO)
			{
				++leftPoint;
			}
		}
	}
}

//��������ʣ��ĵ� 
bool CheckResult::Reduce2Point()
{
	if(leftPoint>=2)
	{
		leftPoint-=2;
		return true;
	}
	return false;
}

//�ж��Ƿ�ɹ�
bool CheckResult::IsSuccess()
{
	return leftPoint<1;
}

//�Ƿ����޽�
bool CheckResult::IsNoSolution()
{
	if(leftLinkLine<1)
	{
		SearchLeftLinkLine();
	}
	return leftLinkLine<1;
}