#include <iostream>
using namespace std;

class Test {
	public:
		Test() {
			m_a = 0;
			m_b = 0;
			cout << "�޲ι��캯��" << endl;
		}
		Test(int a) { //3�ַ���
			m_a = a;
			m_b = 0;
			cout << "1�������вι��캯��" << endl;
		}
		Test(int a, int b ) { //3�ַ���
			m_a = a;
			m_b = b;
			cout << "�вι��캯��" << endl;
		}
		Test(const Test &obj) {
			cout << "��ֵ���캯��" << endl;
		}
		void print() {
			cout << m_a << endl;
			cout << "��ͨ����" << endl;
		}
	protected:
	private:
		int m_a ;
		int m_b;
};

void display() {
	//1.�����вι��캯������1
	Test t1(1, 2);
	t1.print();

	//1.�����вι��캯������2
	Test t2 = (1, 2, 3); //���ű��ʽ ȡ���һ��ֵ
	t2.print();

	//1.�����вι��캯������3
	Test t3 = Test(1, 2); //�����������һ����������
	t3.print();

	Test t4 = Test();
	t4.print();
}

int main() {
	display();
	system("pause");
	return 0;
}
