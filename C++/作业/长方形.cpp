#include <iostream>
using namespace std;

//Rctangle    ��������
class Rectangle {
	private:
		double length;
		double width;
		double heigth;
	public:
		double showVolume() {
			double Volume = length * width * heigth;//���������=��*��*��
			return Volume;
		}
		void setValue() {
			cin >> length >> width >> heigth;
		}
};

int main() {
	Rectangle R[3];
	int i;
	for (i = 0; i < 3; i++) {
		cout << "�������" << i + 1 << "��������ĳ����" << endl;;
		R[i].setValue();
	}
	for (i = 0; i < 3; i++) {
		cout << "��" << i + 1 << "������������Ϊ��";
		cout << R[i].showVolume() << endl;;
	}
	return 0;
}