#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int int1;
	
	printf("input a integer: ");
	scanf("%d",&int1);
	
	if (int1>0)
	{
	    printf("positive integer");
    }
    else if (int1 == 0)
	{
		printf("0");
	}
	else
	{
	    printf("negative integer");
	}
	
	return 0;
}
