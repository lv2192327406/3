//#include <iostream>




//#include <string>
//using namespace std;
//
//class Point {
//	public:
//		void set_x(int x) {
//			m_x = x;
//		}
//		int get_x() {
//
//			return m_x;
//		}
//		void set_y(int y) {
//			m_y = y;
//		}
//		int get_y() {
//
//			return m_y;
//		}
//
//	private:
//		int m_x;
//		int m_y;
//
//};
//
//class Circle {
//	public:
//				void set_x(int x) {
//			m_x = x;
//		}
//		int get_x() {
//
//			return m_x;
//		}
//	private:
//		int m_R;
//};
//
//int main() {
//
//}
//#include <iostream>
//#include <string>
//using namespace std;
////通过结构体创建变量的方式有三�?
////1、struct结构体名 变量�?
////2、struct 结构体名 变量�?{成员�?，成员�?�?..}
////3、定义结构体时顺便定义变�?
//struct Student
//{
//	string name;
//	int age;
//	int score;
//};
//struct Student2
//{
//	string name;
//	int age;
//	int score;
//}s3;
//int main() {
//	//第一�?
//	Student s1;
//	s1.name = "张三";
//	s1.age = 18;
//	s1.score = 99;
//	cout << "name=" << s1.name << "  age=" << s1.age << "  score=" << s1.score << endl;
//	//第二�?
//	Student s2 = {"王二",18,97};
//	cout << "name=" << s2.name << "  age=" << s2.age << "  score=" << s2.score << endl;
//	//第三�?
//	s3.name = "王二";
//	s3.age = 17;
//	s3.score = 78;
//	cout << "name=" << s3.name << "  age=" << s3.age << "  score=" << s3.score << endl;
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Student {
//	string name;
//	int age;
//	int score;
//};
//
//int main() {
//	struct Student stuArray[3] = {
//		{
//			"Zhang", 18, 100
//		},
//		{
//			"lisi", 17, 99
//		},
//		{
//			"wangwu", 16, 98
//		},
//	};
//	stuArray[2].name = "li";
//	for (int i = 0; i < 3; i++) {
//		cout << "姓名�? << stuArray[i].name << "	"
//		<< "年龄�? << stuArray[i].age << "		"
//		<< "分数�? << stuArray[i].score << "		"
//		<< endl;
//	}
//}
#include <iostream>
#include <string>
using namespace std;
//�ṹ������
//1������ṹ��
struct  student {
	string name;
	int age;
	int score;
};

int main() {
	//2�������ṹ������
	struct student stuarr[3] = {
		{"����", 18, 100},
		{"����", 17, 90},
		{"����", 16, 80}
	};
	//3�����ṹ�������е�Ԫ�ظ�ֵ
	stuarr[2].name = "����";
	stuarr[2].age = 17;
	stuarr[2].score = 10;
	//4�������ṹ������
	for (int i = 0; i < 3; i++) {
		cout << "����:" << stuarr[i].name << "\t���䣺" << stuarr[i].age << "\t����:" << stuarr[i].score << endl;

	}
	system("pause");
	return 0;
}