#include <iostream>
using namespace std;

class Person {
	public:
		Person() {
			cout << "Person�޲ε��ú���" << endl;
		}
		Person(int a) {
			age = a;
			cout << "Person�вε��ú���" << endl;
		}
		Person(const Person &p) {
			age = p.age;

		}
		~Person() {

		}
		int age;

};

void test1() {


}

int main() {

}