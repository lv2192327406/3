#include <iostream>
#include <cstring>>

struct Person {           //�����ṹ��
	char name[20];
	int count;

} leader[3] = {"li", 0, "zhang", 0, "sun", 0}; //����ṹ�����鲢��ֵ��
int main() {
	int i, j;
	char leader_name[20];     //�����ַ�����
	printf("�������ѡ�����֣�li,zhang,sun\n");
	for (i = 0; i < 10; i++) {
		scanf("%s", leader_name);  //ѡ�������ѡ������
		for (j = 0; j < 3; j++) {
			if (strcmp(leader_name, leader[j].name) == 0) //������ֶ�Ӧ��������ּ�1
				leader[j].count++;
		}
	}
	printf("\n����ͶƱ���Ϊ��\n");
	for (i = 0; i < 3; i++) {
		printf("%13s:%d\n", leader[i].name, leader[i].count);
	}
	return 0;
}