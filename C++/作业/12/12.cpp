#include <iostream>
using namespace std;

int main() {
	double x;
	cout << "������ɼ�" << endl;
	cin >> x;
	if (x <= 60)
		cout << "�㲻���񣡣�";
	else if (x <= 70)
		cout << "��ϲ������E����";
	else if (x <= 80)
		cout << "��ϲ������D����" ;
	else if (x <= 90)
		cout << "��ϲ������C����" ;
	else if (x <= 100)
		cout << "��ϲ������B����" ;
	else
		cout << "��ϲ������A����" ;
}