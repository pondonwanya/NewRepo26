#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a,b=0;
	scanf("%d", &a);
	b = (a * 2) - 1;
	for (int i = 1; i <= b; i++) {
		for (int j = 1; j <= b; j++) {
			if ((i >= j && j + i <= a * 2) || (j >= i && j + i >= a * 2)) {
				printf("* ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}