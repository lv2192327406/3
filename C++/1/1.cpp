#include <iostream>

using namespace std;

//
//int main() {
//	//Ò»Î¬Êý×é
//	int arr[5] = { 1, 2, 3, 4, 5 };
//
//	/* Ò»Î¬Êý×éµÄµØÖ·ÓëÖ¸Õë */
//	int *p1 = (int *)(&arr + 1);	//&arr£ºÕû¸öÊý×éµÄµØÖ·	//&arr + 1£ºÖ¸ÏòÊý×éµÄÄ©Î²´¦
//	int *p2 = (int *)(arr + 1);		//arrµÈ¼ÛÓÚ&arr[0]£¬ÀàÐÍÎªint *ÀàÐÍ£ºÊý×éÊ×ÔªËØµØÖ·
//	cout << p1[-2] << endl;		//4
//	cout << *p2 << endl;		//2
//
//
//	cout << arr << endl;			//009DFBB8
//	cout << *arr << endl;			//1¡¾µÚ1¸öÔªËØÖµ¡¿
//	cout << arr + 1 << endl;		//009DFBBC	ºóÒÆ4×Ö½Ú¡¾Ìø¹ý1¸öÔªËØ¡¿
//	cout << *(arr + 1) << endl;		//2¡¾µÚ2¸öÔªËØÖµ¡¿
//
//	cout << &arr[0] << endl;		//009DFBB8
//	cout << *(&arr[0]) << endl;		//1¡¾µÚ1¸öÔªËØÖµ¡¿
//	cout << &arr[0] + 1 << endl;	//009DFBBC	ºóÒÆ4×Ö½Ú¡¾Ìø¹ý1¸öÔªËØ¡¿
//	cout << *(&arr[0] + 1) << endl;	//2¡¾µÚ2¸öÔªËØÖµ¡¿
//
//	cout << &arr << endl;			//009DFBB8
//	cout << *(&arr) << endl;		//009DFBB8
//	cout << &arr + 1 << endl;		//009DFBCC	ºóÒÆ4*5=20×Ö½Ú¡¾Ìø¹ýÕû¸öÊý×é¡¿
//	cout << *(&arr + 1) << endl;	//009DFBCC
//
//	return 0;
//}
// int main() {
// 	int arr[5] = {300, 500, 200, 250};
// 	int count = sizeof(arr) / sizeof(arr[0]);
// 	int temp = 0 ;
// for (int i = 0; i < count - 1; i) {
// 	/* code */
// 	for (int j = 0; j < count - i; ++j) {
// 		/* code */
// 		if (arr[j] < arr[j + 1]) {
// 			/* code */
// 			temp = arr[j];
// 			arr[j] = arr[j + 1];
// 			arr[j + 1] = temp;

// 			}
// 		}

// 	}
// 	cout  << arr[0] << endl;
// }

//int main() {
//	int arr[] = {5, 4, 3, 2, 1, 0};
//	int count = sizeof(arr) / sizeof(arr[0]), temp = 0;
//	for (int i = 0; i < count - 1; i++) {
//
//		for (int j = count - 1 - i; j >= 0; --j) {
//
//			temp = arr[j];
//			arr[j] = arr[j - 1];
//			arr[j - 1] = temp;
//		}
//	}
//	/* code */
//	for (int i = 0; i < count; ++i) {
//		cout  << arr[i] << endl;
//	}
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//	int arr[] = {1, 3, 2, 5, 4};
//	int count = sizeof(arr) / sizeof(arr[0]);
//
//	// ������Ԫ������
//	for (int i = 0; i < count / 2; i++) {
//		int temp = arr[i];
//		arr[i] = arr[count - 1 - i];
//		arr[count - 1 - i] = temp;
//	}
//
//	// ������ú�Ľ��
//	for (int i = 0; i < count; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	return 0;
//}
//#include <iostream>  
//using namespace std;  
//
//float FuncP(int a, float b)  
//{  
//	return a + b;  
//}  
//
//int FuncNP()  
//{  
//	return 3;  
//}  
//
//void Func()  
//{  
//}  
//
//int main()  
//{  
//	cout<<sizeof(FuncP(3, 0.4))<<endl; //OK��ֵΪ4��sizeof(FuncP(3,0.4))�൱��sizeof(float)  
//	cout<<sizeof(FuncNP())<<endl; //OK��ֵΪ4��sizeof(FuncNP())�൱��sizeof(int)  
//	/*cout<<sizeof(Func())<<endl; //error��sizeof���ܶԷ���ֵΪ�����͵ĺ�����ֵ*/  
//	/*cout<<sizeof(FuncNP)<<endl; //error��sizeof���ܶԺ�������ֵ*/  
//	return 0;  
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//	int num = 0; // �������������ָ���
//	
//	int x, y, z; // ���ֵİ�λ��ʮλ�͸�λ
//	
//	for (int i = 100; i <= 999; i++) { // ������100��999֮�����λ��
//		// TODO
//		x = i % 10; // ��ȡ��λ
//		y = (i / 10) % 10; // ��ȡʮλ
//		z = i / 100; // ��ȡ��λ
//		
//		if (z * z * z + y * y * y + x * x * x == i) { // �ж��Ƿ���������
//			// TODO
//			num++; // �������������ָ�����1
//			cout << i << endl; // �����������������
//		} else {
//			break; // ���������������������ѭ��
//		}
//	}
//	
//	cout << "�������������ָ�����" << num << endl; // ����������������ָ���
//	
//	cout << "���һ��ѭ���еĸ�λ��ʮλ�Ͱ�λ��" << x << y << z << endl; // ������һ��ѭ���еĸ�λ��ʮλ�Ͱ�λ
//	
//	return 0;
//}
//int main(){
//	int temp;
//	int a[5] = { 1,3,2,5,4 };
//	int start = 0;
//	int end = sizeof(a) / sizeof(a[0]) - 1;
//	for (int i = 0; i < 5; i++)
//	{
//		if (start < end)
//		{
//			temp = a[start];
//			a[start] = a[end];
//			a[end] = temp;
//		}
//		start++;
//		end--;
//	}
//	for (int i = 0; i < 5;i++)
//	{
//		cout << a[i] << endl;
//	}
//	system("pause");
//	return 0;
//}
//int main() {
//	int Scores[3][3] = {
//		{100, 100, 99},
//		{89, 99, 80},
//		{79, 90, 60}
//	};
//	
//	for (int i = 0; i < 3; i++) {
//		int sum = 0;
//		for (int j = 0; j < 3; j++) {
//			sum += Scores[i][j];
//		}
//		cout << "��" << i+1 << "��ѧ�����ܷ֣�" << sum << endl;
//	}
//	
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//void swap_by_value(int x, int y) {
//	int tmp = x;
//	x = y;
//	y = tmp;
//	cout << "&x: " << &x << ", &y: " << &y << endl;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 7;
//	
//	cout << "before: a: " << a << ", b: " << b << endl;
//	cout << "&a: " << &a << ", &b: " << &b << endl;
//	swap_by_value(a, b);
//	cout << "after : a: " << a << ", b: " << b << endl;
//	
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//void swap_by_pointer(int* x, int* y) {
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//	cout << "&x: " << x << ", &y: " << y << endl;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 7;
//	
//	cout << "before: a: " << a << ", b: " << b << endl;
//	cout << "&a: " << &a << ", &b: " << &b << endl;
//	swap_by_pointer(&a, &b);
//	cout << "after : a: " << a << ", b: " << b << endl;
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	int n,temp=1;
//cin>>n;
//	for(int i=1;i<=n;i++){
//		//TODO
//		temp*=i;
//		
//	}
//	cout<<temp<<endl;
//	
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,temp =0;
//	int i1,i2,i3,i4;
//	cin>>n;
//	i1=n/1000;
//	i2=n/100%10;
//	i3=n%100/10;
//	i4=n%10;
//	temp=i1+i2+i3+i4;
//	cout<<temp<<endl;
//}
//#include <iostream>
//#include <iomanip>  // ����ͷ�ļ���ʹ��setprecision����
//using namespace std;
//
//int main()
//{
//	int n;
//	float temp;
//	int i1, i2;
//	cin >> n;
//	i1 = n / 10;
//	i2 = n % 10;
//	temp = float(i1) / i2;
//	cout << fixed << setprecision(1) << temp << endl;  // �����������һλС��
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	
//	int x,temp=0,i1,i2,i3;
//	cin>>x;
//	i1=x%10;
//	i2=x%100/10;
//	i3=x/10/10;
//	temp=i1*100+i2*10+i3+x;
//	cout<<temp<<endl;
//	
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,temp =0;
//	int i1,i2,i3,i4;
//	cin>>n;
//	i1=n/1000;
//	i2=n/100%10;
//	i3=n%100/10;
//	i4=n%10;
//	temp=i1+i2+i3+i4;
//	cout<<temp<<endl;
//}
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int M = 5;
//	int n = 5;
//	
//	// ����������ָ��
//	char *a[5];
//	
//	for (int i = 0; i < M; i++) 
//	{
//		// ����������ָ��
//		a[i] = new char[n];
//		// �и�ֵ
//		for (int j = 0; j < n; j ++)
//		{
//			a[i][j] = j;
//		}
//	}
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d  ", a[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	// delete �ڴ�
//	for (int i = 0; i < M; i++)
//	{
//		delete [] a[i];
//	}
//	return 0;
//}
#include <iostream>
using namespace std;
int main()
{   
	int n = 5;
	int (* array2D)[5] = new int[n][5];  
	for(int i=0; i<n; ++i)  
	{  
		for(int j=0; j<5; ++j)  
		{  
			array2D[i][j] = i * 5 + j;  
		}  
	}  
	for(int i=0; i<n; ++i)  
	{  
		for(int j=0; j<5; ++j)  
		{  
			printf("%d  ", array2D[i][j]);
		} 
		printf("\n");
	}
	system("pause");
	delete[] array2D;
	return 0;
}
