#include <iostream>
#include <string>
using namespace std;

class Person {

	public:
		string name;
	protected:
		string Car;
	private:
		int PassWord;
	public:
		void	fun() {
			name = "����";
			Car = "С����";
			PassWord = 12345;

		}
};

int main() {
	Person my;
	my.fun();
	return 0;


}