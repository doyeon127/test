#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//���� ����
	int n;
	int f3;
	int f1 = 0;
	int f2 = 1;

	//����� �Ǻ���ġ ���� ��ȣ �Է¹ޱ�
	printf("�� ��° �Ǻ���ġ ���� ����� ������ �Է��Ͻÿ�. :");
	scanf_s("%d", &n);

	// 1��° �Ǻ���ġ ���� �� ���
	if (n == 1) {
		printf("%d��° �Ǻ���ġ ��: %d", n, f1);
	}

	// 2��° �Ǻ���ġ ���� �� ���
	else if (n == 2) {
		printf("%d��° �Ǻ���ġ ��: %d", n, f2);
	}
	else
	{
		for (int i = 2; i < n; i++) // 3��° ������ �Ǻ���ġ ���� �� ���
		{
			f3 = f1 + f2;

			f1 = f2;
			f2 = f3;
		}
		printf("%d��° �Ǻ���ġ ��: %d", n, f3);
	}
	return 0;
}