#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int answer=13;
	int num=1;
	
	do
	{
		printf("Guess a number: ");
	    scanf("%d", &i);
	
		if (i<answer)
		{
			printf("low!\n");
			num++;
		}
		else if (i == answer)
		{
		    printf("congratulation!\n");
		}
		else
		{
			printf("high!\n");
			num++;
		}
	} while (i != answer);
	
	printf("the number of trials is: %i\n", num);
	
	
	return 0;
}
