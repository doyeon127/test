#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int i = 0, j = 0, k = 0, l = 0, m = 0;

	// ��Ī�� �� ���� ���� �� ����
	printf("���� �Է��ϼ���. :");
	scanf_s("%d", &a);

	//���� ����� ����.
	for (i = 0; i < a; i++)
	{
		for (j = 0; j <= i; j++)
			printf("*");
		for (k = 1; k < a - i; k++)
			printf(" ");
		for (l = 1; l < a - i; l++)
			printf(" ");
		for (m = 0; m <= i; m++)
			printf("*");
		printf("\n");
	}

	//�Ʒ���.
	for (i = 1; i < a; i++)
	{
		for (j = 0; j < a - i; j++)
			printf("*");
		for (k = 1; k <= i; k++)
			printf(" ");
		for (l = 1; l <= i; l++)
			printf(" ");
		for (m = 0; m < a - i; m++)
			printf("*");

		printf("\n");
	}
	return 0;
}