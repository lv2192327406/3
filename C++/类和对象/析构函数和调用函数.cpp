#include <iostream>
using namespace std;

class Person {
	public:
		Person() {
			cout << "Person�����Ĺ���\n" << endl;
		}
		//2.��������
		/*û�з���ֵ��дvoid
		��������������ͬ������ǰ��~
		���������������в����ģ������Է�������
		����������ǰ���Զ�������������������ֻ�����һ��
		*/
		~Person() {
			cout << "Person����������\n" << endl;
		}

};

void test01() {
	Person p;//��ջ�ϵ����ݣ�test01ִ����Ϻ��ͷ��������
}

int main() {
	test01();

}