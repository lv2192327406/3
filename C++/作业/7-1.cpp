#include <iostream>
using namespace std;
struct Date //�����ṹ������ΪDate


{
	int month;
	int day;
	int year;

};

struct student { //�����ṹ������ΪStudent
	int num;
	char name[20];
	string sex;
	Date birthday; //����birthdayΪDate���͵ĳ�Ա
	float score;
}

student1, student2 = {10002, "Wang man", "f", 5, 23, 1992, 89.5}; //����Student���͵ı���student1��student2�����Ҷ�student2���г�ʼ��
int main() {
	student1 = student2; //��student2��ֵ����student1
	cout << student1.num << endl

	     << student1.name << endl

	     << student1.sex << endl

	     << student1.birthday.month << " /" << student1.birthday.day << " /" << student1.birthday.year << endl

	     << student1.score << endl;

	return 0;

}