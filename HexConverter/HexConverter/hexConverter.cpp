
#define _CTR_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int alg ;
	int proov = 160;
	char hex;
	char num[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	
	printf("Enter a number\n");
	scanf_s("%d", &alg);


	if (alg > 9)
	{
		if (alg == 10) hex = 'A';
		else if (alg == 11) hex = 'B';
		else if (alg == 12) hex = 'C';
		else if (alg == 13) hex = 'D';
		else if (alg == 14) hex = 'E';
		else if (alg == 15) hex = 'F';
	}
	else hex = num[alg];
	printf("%c", hex);
	getchar();
	return 0;
}