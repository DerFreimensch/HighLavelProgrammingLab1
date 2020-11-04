#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main(void) {
	char* stroka = NULL;
	char ch;
	int n = 0, i = 0;
		while ((ch = getchar()) != '\n') {
			n++;
			stroka = (char*)realloc(stroka, n * sizeof(char));
			stroka[i++]=ch;
			
		}
		for (i = 0; i < n; i++) {
			printf("%c", stroka[i]);
	}
		free(stroka);
		return 0;
}
