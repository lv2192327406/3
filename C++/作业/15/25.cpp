#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = n ; i >= 0; i--) {		//��ѭ��ִ��n�Σ������м���ִ�м��Ρ�iҲ������������֣�ִ��n�μ���
		for (int p = i; p > 0; p--)				//����ո�ִ��n-1�Σ�ÿ�����һ���ո�pҲ������������֣�ֻҪʹѭ��ִ�д�����ȷ�Ϳ���
			cout << ' ';
		for (int p = n ; p > 0; p--)			//����Ǻţ�ִ��n-i�Σ�ÿ�����һ���Ǻš�ͬ�ϣ�ע��ѭ��ִ�д���
			cout << '*' << ' ';
		cout << endl;
	}
}
