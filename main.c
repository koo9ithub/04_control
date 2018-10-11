#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int int1=0;
	char c;
	char str[100];
	
	printf("input a string: ");
	
	while ( (c=getchar()) !='\n')
	{
		if ('0'<=c && c<='9')
		{
			int1++;
		}
	}
	
	printf("the number of digits is: %i", int1);
	
	return 0;
}
