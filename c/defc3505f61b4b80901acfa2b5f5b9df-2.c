#include <stdio.h>

// �ҳ�������ֻ����һ�ε���������
void findSingleNumbers(int arr[], int size, int *num1, int *num2) {
	int xorResult = 0;

	// ������������Ԫ�ؽ����������
	for (int i = 0; i < size; i++) {
		xorResult ^= arr[i];
	}


	if (xorResult == 0) {
		printf("����������ظ���\n");
		return;
	}

	int bitPos = 0;
	while ((xorResult & 1) == 0) {
		xorResult >>= 1;
		bitPos++;
	}

	*num1 = 0;
	*num2 = 0;
	for (int i = 0; i < size; i++) {
		if ((arr[i] >> bitPos) & 1) {
			*num1 ^= arr[i];
		} else {
			*num2 ^= arr[i];
		}
	}
}

int main() {
	int size;
	printf("���������: ");
	scanf("%d", &size);

	int arr[size];
	printf("����������Ԫ��:\n");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	int num1, num2;
	findSingleNumbers(arr, size, &num1, &num2);

	if (num1 == 0 && num2 == 0) {
		return 0;
	}

	printf("The two single numbers are %d and %d.\n", num1, num2);

	return 0;
}