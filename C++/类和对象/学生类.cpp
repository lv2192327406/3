#include <iostream>
#include <string>
using namespace std;

class Student {

	public://����Ȩ��
		string name;
		int id;

		void ShowStudent() {
			cout << "������" << name << "\n" << "ѧ�ţ�" << id << endl;
		}
};

int main() {
	Student s1;
	s1.id = 10;
	s1.name = "�����Ƿż�Ŷ";
	s1.ShowStudent();
}