#include "khb.h"

int main() {

	//�迭
	int subway_1 = 30; //����ö 1ȣ������ 30���� Ÿ�� �ִ�.
	int subway_2 = 40;
	int subway_3 = 50;

	printf("����ö 1ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_1);
	printf("����ö 2ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_2);
	printf("����ö 3ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_3);
	printf("-------------------------------------\n");
	//�������� ������ ���ÿ� ����
	int subway_array[3]; //[0] [1] [2]
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++) {
		printf("����ö %dȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", i+1,subway_array[i]);
	}
	printf("-------------------------------------\n");

	//�� ���� ���
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //���� �ϳ��� �ʱ�ȭ ���� ������ ������ ���� ����, �ϳ��� �����Ѵٸ� �������� 0���� ����.
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	printf("-------------------------------------\n");

	/*
	�迭 ũ��� �׻� ����� ����
	ex) int size = 10;
	int arr [size]; => ���� �߻�.
	*/

	float arr_f[5] = { 1.0f,2.0f,3.0f }; //1.0, 2.0, 3.0, 0.0, 0.0���� ����
	for (int i = 0; i < 5; i++) {
		printf("%f\n", arr_f[i]);
	}
	printf("-------------------------------------\n");

	//���� vs  ���ڿ�
	char c = 'A';
	printf("%c\n", c);
	printf("-------------------------------------\n");


	//���ڿ� ������ '��'�� �ǹ��ϴ� NULL ���� '\0'�� ���ԵǾ�� ��.
	char str[7] = "coding"; // [c][o][d][i][n][g][\0]
	printf("%s\n", str);
	printf("%d\n", sizeof(str)); //sizeof()�Լ� => �迭�� ũ�⸦ ���
	printf("-------------------------------------\n");

	for (int i = 0; i < sizeof(str); i++) {
		printf("%c\n", str[i]);
	}
	printf("-------------------------------------\n");

	//���� 1���� : 1byte
	//�ѱ� 1���� : 2byte
	char kor[] = "�����ڵ�";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor)); //2*4���� + \0(�ι���) => 9
	printf("-------------------------------------\n");

	char c_array[7] = { 'c','o','d','i','n','g','\0'}; // char c_array[7] = "coding" �� ���� �ǹ�.
	printf("%s\n", c_array);
	printf("-------------------------------------\n");

	char ary[10] = { 'c','o','d','i','n','g' };
	printf("%d\n", sizeof(ary));
	for (int i = 0; i < sizeof(ary); i++) {
		printf("%c\n", ary[i]); //coding ��� �� �������� NULL����(�� ����) 
	}
	printf("-------------------------------------\n");

	for (int i = 0; i < sizeof(ary); i++) {
		printf("%d\n", ary[i]); //ASCII�ڵ� ���� ���, NULL���ڴ� 0���� ���
	}
	printf("-------------------------------------\n");

	//ASCII�ڵ� : a = 97, A = 65, 0 = 48 ...
	printf("%c\n", 'a');
	printf("%d\n", 'a');
	printf("%c\n", 'b');
	printf("%d\n", 'b');
	printf("%c\n", 'A');
	printf("%d\n", 'A');
	printf("%c\n", '\0');
	printf("%d\n", '\0');
	printf("%c\n", '0');
	printf("%d\n", '0');
	printf("-------------------------------------\n");


	//0~127 ������ �ƽ�Ű�ڵ� �������� �ش��ϴ� ���� Ȯ��
	for (int i = 0; i < 128; i++) {
		printf("�ƽ�Ű �ڵ� ���� %d : %c\n", i, i);
	}


	return 0;
}