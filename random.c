#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	//���� �Լ� rand() => time.h, stdlib.h�� include �������.
	//rand()�Լ��� ����Ϸ��� ���� �ʱ�ȭ�� �ʼ�.
	printf("���� �ʱ�ȭ ����..\n");

	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}
	printf("\n----------------------------\n");

	srand(time(NULL)); //���� �ʱ�ȭ.

	printf("���� �ʱ�ȭ ����..\n");

	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}
	printf("\n----------------------------\n");


	//���� ���� �� -if��
	srand(time(NULL));
	int num = rand() % 3; //0~2��ȯ

	if (num == 0) {
		printf("����\n");
	}
	else if (num == 1) {
		printf("����\n");
	}
	else if(num == 2){
		printf("��\n");
	}
	else {
		printf("�����.\n");
	}
	printf("----------------------------\n");


	//���� ���� �� - switch��
	//switch������ �� case���� break �ʿ�.
	int n = rand() % 3;
	switch (n) {
	case 0:printf("����\n"); break;
	case 1:printf("����\n"); break;
	case 2:printf("��\n"); break;
	default: printf("�����.\n"); break; 
	}

	//���� ��/��/�� - switch��
	//switch���� if��ó�� �̿��ϱ�
	int age = 8;
	switch (age) { //8~13�� �ʵ�, 14~16�� �ߵ�, 17~19�� ���.
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("�ʵ��л��Դϴ�.\n"); break;
	case 14:
	case 15:
	case 16:printf("���л��Դϴ�.\n"); break;
	case 17:
	case 18:
	case 19:printf("����л��Դϴ�.\n"); break;
	default:printf("�л��� �ƴѰ�����.\n"); break;
	}
	printf("----------------------------\n");


	//Up and Down - ������Ʈ
	srand(time(NULL));
	num = rand() % 100 + 1; //1~100������ ����

	printf("���� : %d\n", num);

	int answer = 0; //����
	int chance = 5; //��ȸ

	while (chance > 0) {
		printf("���� ��ȸ %d ��\n", chance--);
		printf("���ڸ� ���������� (1~100) : ");
		scanf("%d", &answer);

		if (answer > num) {
			printf("DOWN ��\n");
		}
		else if (answer < num) {
			printf("UP ��\n");
		}
		else if (answer == num) { //������ ��� break�� ���� �ݺ��� Ż��
			printf("�����Դϴ�!\n");
			break; 
		}
		else {
			printf("�� �� ���� ������ �߻��߽��ϴ�.\n");
		}

		if (chance == 0) {
			printf("��� ��ȸ�� �� ����ϼ̳׿�. �ƽ��� �����߽��ϴ�.");
		}
	}
	
	return 0;
}