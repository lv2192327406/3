#include <iostream>
using namespace std;

class Student {
	public :
		void display( ); //���ó�Ա����ԭ������
	private :
		int num;
		string name;
		char sex;
//����3����˽�����ݳ�Ա
};

void Student::display( ) { //�����ⶨ��display�ຯ��
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
Student stud1, stud2; //�������������

int main() {
	stud1.display();
	stud2.display();
	return 0;
}