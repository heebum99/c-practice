#include <stdio.h>

int main() {

	//������ ������ ���� ����
	int age = 12;
	printf("%d\n", age); //%d�� ������, age�� ����.
	age = 13;
	printf("%d\n", age);

	//�Ǽ��� ������ ���� ����
	float f = 46.5f; //�Ǽ��� float �ڿ��� f�� �ٿ������.
	printf("%f\n",f); //%f�� �Ǽ��� => float
	double d = 4.428;
	printf("%lf\n", d); //%lf�� �Ǽ��� => double

	//���(������ �ʴ� ��)�� ���� ���� <=> ���� 
	const int YEAR = 2000; //const => ��� ����
	printf("�¾ �⵵ : %d\n", YEAR);

	//printf
	//����
	int add = 3 + 7;
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n",30,79,30+79);

	//scanf => Ű���� �Է��� �޾Ƽ� ����
	//scanf�� ����Ϸ��� #define _CRT_SECURE_NO_WARNINGS �ʿ�.
	int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input); //scanf���� ������ &�� �ּҰ��� ǥ���������.
	printf("�Է°� : %d\n", input);

	int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three); //2�� �̻��� ���� �Է��Ҷ� space�ٷ� ����
	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);

	//����(�� ����), ���ڿ�(�� ���� �̻��� ���� ����)
	char c = 'A';
	printf("%c\n", c); //%c�� ����

	char str[256]; //���ڿ��� ����ϱ� ���� ���� �迭 ����
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s(" %s", str, sizeof(str)); //%s�� ���ڿ�, ���� �迭�� �Է¹������� sizeof�� ũ�� ���� �ʿ�.
	printf("%s\n", str);
	return 0;
}