#include<stdio.h>

int main(void) {

	int a;
	int b;

	scanf("%d ", &a);
	scanf("%d", &b);

	if (a > b) {

		printf(">");

	}

	else if (a < b) {

		printf("<");

	}

	else {

		printf("==");

	}


	return 0;
}