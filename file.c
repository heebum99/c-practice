#include "khb.h"
#define MAX 10000

int main() {
	//���� �����
	//���Ͽ� � �����͸� ����.
	//���Ͽ� ����� �����͸� �ҷ�����.

	//fputs(����), fgets(�б�) -> ���ڿ� ����
	char line[MAX]; //char line[10000];
	
	//���Ͽ� ����
	//FILE* file = fopen("c:\\�ڹ�\\test1.txt", "wb"); //\2���� �Ѱ��� �ν��� ��.
	////r -> read, w -> write, a -> apend(�̾��), t -> text, b -> binary
	//
	//if (file == NULL) {
	//	printf("���� ���� ����\n");
	//	return 1;
	//}

	//fputs("fputs�� �̿��ؼ� ���� ����Կ�\n", file);
	//fputs("�� �������� Ȯ�����ּ���\n", file);
	/*fclose(file);*/

	//���� �б�
	FILE* file2 = fopen("c:\\�ڹ�\\test1.txt", "rb");

	if (file2 == NULL) {
		printf("���� ���� ����\n");
		return 1;
	}

	while (fgets(line, MAX, file2) != NULL) { //fgets(�ҷ��� ������ ������ ��, ������, ���� ������)
		printf("%s", line);
	}

	printf("\n---------------------------------------------\n");

	//������ ������ ���� ���� ���¿��� � ���α׷��� ������ �����?
	//������ �ս� �߻� ����! �׷��� �׻� ������ �ݾ��ִ� ������ �ʿ�!

	fclose(file2);
	

	//fprint, fscanf => ����ȭ�� ���°� ����.
	//ex) printf("%d %s %c",...);
	int num[6] = { 0,0,0,0,0,0 }; //��÷ ��ȣ
	int bonus = 0; //���ʽ� ��ȣ
	char str1[MAX];
	char str2[MAX];

	//���Ͽ� ����
	//FILE* file3 = fopen("c:\\�ڹ�\\test2.txt", "wb");
	//
	//if (file3 == NULL) {
	//	printf("���� ���� ����\n");
	//	return 1;
	//}

	////�ζ� ��÷ ��ȣ ����
	//fprintf(file3, "%s %d %d %d %d %d %d\n", "��÷��ȣ", 1, 2, 3, 4, 5, 6);
	//fprintf(file3, "%s %d\n", "���ʽ���ȣ", 7);

	//fclose(file3);

	//���� �б�
	FILE* file4 = fopen("c:\\�ڹ�\\test2.txt", "rb");
	
	if (file4 == NULL) {
		printf("���� ���� ����\n");
		return 1;
	}
	
	fscanf(file4, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);
	
	fscanf(file4, "%s %d", str2, &bonus);
	printf("%s %d\n", str2, bonus);

	fclose(file4);

	return 0;
}