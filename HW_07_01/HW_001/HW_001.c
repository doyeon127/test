#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//�Լ� ����
	float num1, num2, num3, num4, num5;

	printf("1 ��° �Ǽ��� �Է��Ͻÿ�."); // �Ǽ� �� �ޱ�.
	scanf_s("%f", &num1);

	printf("\n2 ��° �Ǽ��� �Է��Ͻÿ�.");
	scanf_s("%f", &num2);

	printf("\n3 ��° �Ǽ��� �Է��Ͻÿ�.");
	scanf_s("%f", &num3);

	printf("\n4 ��° �Ǽ��� �Է��Ͻÿ�.");
	scanf_s("%f", &num4);

	printf("\n5 ��° �Ǽ��� �Է��Ͻÿ�.");
	scanf_s("%f", &num5);

	printf("---- ��� ----\n");

	//��հ� ���ϱ�.
	float ave;
	float total;
	total = num1 + num2 + num3 + num4 + num5;
	ave = total / 5;

	printf("����� %f �Դϴ�.\n", ave);

	//�ִ밪 �ּڰ� ���ϱ�
	float max, min;

	max = num1;
	if (max < num2) max = num2;
	if (max < num3) max = num3;
	if (max < num4) max = num4;
	if (max < num5) max = num5;

	printf("�ִ밪�� %f �Դϴ�.\n", max);

	min = num1;
	if (max < num2) min = num2;
	if (max < num3) min = num3;
	if (max < num4) min = num4;
	if (max < num5) min = num5;

	printf("�ּڰ��� %f �Դϴ�.\n", min);
	return 0;
}
