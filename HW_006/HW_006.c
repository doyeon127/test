#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a;

	printf("���� �Է��ϼ���: ");  // �� ���� a�Է¹ޱ�
	scanf_s("%d", &a);

	for (int i = 0; i < a; i++) { // �Ƕ�̵� ��ġ ������ ���� ���� 
		for (int j = 0; j < a - i; j++) {
			printf(" "); 
		}
		if (0 < i && i < a - 1) {
			printf("*");
			for (int j = 0; j < i * 2 - 1; j++) { // �߰� ���� �����.
				printf(" ");
			}
			printf("*");
		}
		if (i == 0 || i == a - 1) { // ù ��° ��� ������ �� �� ����Ʈ
			for (int j = 0; j < i * 2 + 1; j++) {
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}