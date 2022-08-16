#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//경찰 조서 작성
	char name[256];
	printf("이름이 뭐예요? ");
	scanf_s(" %s", name, sizeof(name));

	int age;
	printf("몇살이예요? ");
	scanf("%d", &age);

	float weight;
	printf("몸무게는 몇 kg 이예요? ");
	scanf("%f", &weight);

	double height;
	printf("키는 몇 cm 이예요? ");
	scanf("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요? ");
	scanf_s(" %s", what, sizeof(what));

	//조서 내용 출력
	printf("\n\n-- 범죄자 정보 --\n\n");
	printf(" 이름	: %s\n", name);
	printf(" 나이	: %d\n", age);
	printf(" 몸무게	: %.2f\n", weight);
	printf(" 키	: %.2lf\n", height);
	printf(" 범죄	: %s\n", what);
	return 0;
}