#include <iostream>
using namespace std;
const double PI = 3.1415;

//������
class Circle {
//����
	public:
		//��Ϊ
		int r;
		double sum() {
			return 2 * PI * r;
		}
};



int main() {
	Circle cl;
	cl.r = 10;
	cout << "�ܳ�:" << cl.sum() << endl;
	system("pause\n");
	return 0;
}