#include "khb.h"

int main() {
	//다차원 배열 Mulitidimensional Array
	int arr[2][5]; 
	//□□□□□ [0][0],[0][1],...[0][4]
	//□□□□□ [1][0],[1][1]....[1][4]

	int arr2[2][5] = {
		{1,2,3,4,5},
		{1,2,3,4,5} 
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			printf("2차원 배열 (%d, %d)의 값 : %d\n", i, j, arr2[i][j]);
		}
		printf("\n");
	}

	int arr3[3][3][3] = {
		{
			{1,2,3,},
			{4,5,6},
			{7,8,9}
		},
		{
			{11,12,13},
			{14,15,16},
			{17,18,19}
		},
		{
			{21,22,23},
			{24,25,26},
			{27,28,29}
		}
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				printf("3차원 배열 (%d, %d, %d)의 값 : %d\n", i, j, k, arr3[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}