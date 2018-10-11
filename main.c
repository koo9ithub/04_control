#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int answer=13;
	
	do
	{
		printf("Guess a number: ");
	    scanf("%d", &i);
	
		if (i<answer)
		{
			printf("low!\n");
		}
		else if (i == answer)
		{
		    printf("congratulation!\n");	
		}
		else
		{
			printf("high!\n");
		}
	} while (i != answer);
	
	
	return 0;
}
