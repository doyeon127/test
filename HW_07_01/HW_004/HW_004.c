#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float num1, num2;
	char ch;

	//���� ȭ�� ���� ���缭 ���
	printf("Input Arithmetic Operation\n");
	printf("ex)    3.4 * 8.5\n");
	printf("       2.9 - 5.4\n");
	printf("       3.9 * 8.0\n");
	printf("       3.9 * 8\n\n");

	printf("input:");
	scanf("%f %c %f", &num1, &ch, &num2);// �Ǽ� 2���� ������ 1���� �Է¹ޱ�

	int mul = 1; // �ŵ������� ���, for�� ���
	if (ch == '^') {
		for (int i = 0; i < num2; i++) {
			mul = mul * num1;
		}printf("%.2f ^ %.2f = %.2f\n", num1, num2, mul);

	}

	else {
		switch (ch) { //�Է¹��� �������� ��츦 �ŵ������� ���� ���̽��� ���� ����
		case '+':
			printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
			break;

		case '-':
			printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
			break;

		case '*':
			printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
			break;

		case '/':
			if (num2 != 0) {
				printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
			}
			else // �����⿡�� ���ܰ� 0 ����.
				printf("0�� �ƴ� ���ڷ� �Է��� �ּ��� \n");
		}

	}
	return 0;
}