#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, r;
	int P, C;

	printf("n�� �� : "); //n�� �� �Է� 
	scanf_s("%d", &n);

	printf("r�� �� : "); //r�� �� �Է� 
	scanf_s("%d", &r);

	//���� 
	P = n;
	for (int i = 1; i < r; i++) {
		P = P * (n - i);
	}
	printf("������ �� : %d\n", P);

	//�ߺ� ����
	P = n;
	for (int i = 1; i < r; i++) {
		P = P * n;
	}
	printf("�ߺ� ������ �� : %d\n", P);

	//����
	P = n;
	C = r;
	for (int i = 1; i < r; i++) {
		P = P * (n - i);
	}
	for (int i = 1; i < r; i++) {
		C = C * (r - i);
	}
	printf("������ �� : %d\n", P / C);


	//�ߺ� ����
	P = n + r - 1;
	C = r;
	for (int i = 1; i < r; i++) {
		P = P * ((n + r - 1) - i);
	}
	for (int i = 1; i < r; i++) {
		C = C * (r - i);
	}
	printf("�ߺ� ������ �� : %d\n", P / C);

	return 0;
}