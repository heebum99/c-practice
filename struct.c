#include "khb.h"

//����ü
struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame; //���� ��ü ����
};

//typedef�� �̿��� ����ü ����
typedef struct GameInformation { //GameInformation ��������.
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame; //���� ��ü ����
} GAME_INFO; //struct GameInformation == GAME_INFO


int main() {
	//[���� ���]
	//�̸� : ��������
	//�߸ų⵵ : 2017��
	//���� : 50��
	//���ۻ� : ����ȸ��

	char* name = "��������";
	int year = 2017;
	int price = 50;
	char* company = "����ȸ��";

	//[�� �ٸ� ���� ���]
	//�̸� : �ʵ�����
	//�߸ų⵵ : 2017��
	//���� : 100��
	//���ۻ� : �ʵ�ȸ��

	char* name2 = "�ʵ�����";
	int year2 = 2017;
	int price2 = 100;
	char* company2 = "�ʵ�ȸ��";

	//����ü ���
	struct GameInfo gameInfo1;
	gameInfo1.name = "��������";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "����ȸ��";

	//����ü ���
	printf("-- ���� ��� ���� --\n");
	printf("  ���Ӹ�   : %s\n", gameInfo1.name);
	printf("  �߸ų⵵ : %d\n", gameInfo1.year);
	printf("  ����     : %d\n", gameInfo1.price);
	printf("  ���ۻ�   : %s\n", gameInfo1.company);

	//����ü�� �迭ó�� �ʱ�ȭ
	struct GameInfo gameInfo2 = { "�ʵ�����",2017,100,"�ʵ�ȸ��" };
	
	printf("\n-- �Ǵٸ� ���� ��� ���� --\n");
	printf("  ���Ӹ�   : %s\n", gameInfo2.name);
	printf("  �߸ų⵵ : %d\n", gameInfo2.year);
	printf("  ����     : %d\n", gameInfo2.price);
	printf("  ���ۻ�   : %s\n", gameInfo2.company);

	//����ü �迭
	struct GameInfo gameArray[2] = {
	{ "��������",2017,50,"����ȸ��" },
	{ "�ʵ�����",2017,100,"�ʵ�ȸ��" } 
	};

	//����ü ������
	struct GameInfo* gamePtr; //�̼Ǹ�
	gamePtr = &gameInfo1;

	//����ü �����ͷ� ����ü ������ ���� ��� 2����
	//1. (.)�� ���� ����
	printf("\n-- �̼Ǹ��� ���� ��� ���� --\n");
	printf("  ���Ӹ�   : %s\n", (*gamePtr).name);
	printf("  �߸ų⵵ : %d\n", (*gamePtr).year);
	printf("  ����     : %d\n", (*gamePtr).price);
	printf("  ���ۻ�   : %s\n", (*gamePtr).company);

	//2. (->)�� ���� ����
	printf("\n-- �̼Ǹ��� ���� ��� ���� --\n");
	printf("  ���Ӹ�   : %s\n", gamePtr->name);
	printf("  �߸ų⵵ : %d\n", gamePtr->year);
	printf("  ����     : %d\n", gamePtr->price);
	printf("  ���ۻ�   : %s\n", gamePtr->company);

	//���� ��ü ���� �Ұ�
	gameInfo1.friendGame = &gameInfo2;
	//friendGame�� ����ü �����̹Ƿ� .�����ڷ� ���� �� friendGame �� ������,
	//������ �ȿ� �ִ� �ּ��� ����ü ������ �����Ϸ��� -> �����ڷ� ����

	printf("\n-- ���� ��ü�� ���� ��� ���� --\n");
	printf("  ���Ӹ�   : %s\n", gameInfo1.friendGame->name); 
	printf("  �߸ų⵵ : %d\n", gameInfo1.friendGame->year);
	printf("  ����     : %d\n", gameInfo1.friendGame->price);
	printf("  ���ۻ�   : %s\n", gameInfo1.friendGame->company);

	//typedef
	//�ڷ����� ���� ����
	int i = 1;
	typedef int ����; //int�� ������ ������ ����, int ��� ������ ��� ����.
	typedef float �Ǽ�;

	���� �������� = 3; //int i = 3;
	�Ǽ� �Ǽ����� = 3.23f; //float f = 3.23f;

	printf("\n\n�������� : %d, �Ǽ����� : %.2f\n\n", ��������, �Ǽ�����);

	typedef struct GameInfo ��������; //struct GameInfo == ��������
	�������� game1;
	game1.name = "�ѱ� ����";
	game1.year = 2015;

	GAME_INFO game2;
	game2.name = "�ѱ� ����2";
	game2.year = 2014;

	struct GameInformation game3;
	game3.name = "�ѱ� ����3";

	return 0;
}