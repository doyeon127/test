#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int year;

	printf("�⵵�� �Է��ϼ���. : "); //�⵵ �� �Է¹ޱ�
	scanf_s("%d", &year);

	if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0) // ���� ���� ����. 
		printf("%d���� ����\n", year);

	else //���� ���ǿ� �ش���� ������ ���.
		printf("%d���� ���\n", year);

	return 0;
}