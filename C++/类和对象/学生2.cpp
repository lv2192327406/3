#include <iostream>
using namespace std;

class Point {
	public:
		void SetPoint(int x, int y);
		void PrintPoint();
	private:
		int xPos, yPos;
};

void Point::SetPoint(int x, int y) {
	xPos = x;
	yPos = y;

}

void Point::PrintPoint() {
	cout << "x = " << xPos << endl;

	cout << "y = " << yPos << endl;


}

int main() {
	Point M; //�ö���õ��ഴ��һ������ ��M

	M.SetPoint(10, 20); //���� M�� ��x,yֵ

	M.PrintPoint(); //��� M�� ����Ϣ


	return 0;


}