/*#include <stdio.h>
#define N 10
int main(void) {
	int mas[N];
	int Flag=0;
	int* ptr = mas;
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &mas[i]);
	}
	for (int j = N-1; j > 0; j--) {
		if (*(ptr + j) % 2 == 0) {
			Flag = *(ptr + j);
			break;
		}
	}
	for (int i = 1; i < (N-1); i++) {
		if (*(ptr + i) % 2 == 1) {
			*(ptr + i) += Flag;
		}
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", mas[i]);
	}
	return 0;
}*/



