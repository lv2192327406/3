//����3�����������ֵ
#include <iostream>
using namespace std;

int main() {
	int x, y, z, max;
	cout << "����������������" << endl;
	cin >> x >> y >> z;
	if (x > y ) {
		if (x > z)
			max = x;
		else
			max = z;
	} else {
		if (y > z)
			max = y;
		else
			max = z;
	}
	cout << "���ֵΪ��" << max << endl;
	return 0;
}

