#include <iostream>
using namespace std;

//����time��
class time {
	public:  //���ݳ�ԱΪ����
		int hour;
		int minute;
		int sec;
};

int main() {
	time t1;//����t1Ϊtime�����

	cout << "����ʱ�䣺" << endl;

	cin >> t1.hour; //һ�����е������������趨��ʱ��
	cin >> t1.minute;
	cin >> t1.sec;

	cout << "���ʱ��Ϊ��" << endl;

	cout << t1.hour << ":" << t1.minute << ":" << t1.sec
	     << endl;


	return 0;
}
