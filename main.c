#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int int1;
	
	printf("input an integer: ");
	scanf("%d",&int1);
	
	if (int1>0)
	{
	    printf("�� �� �� �� : %d", int1);
    }
    else if (int1 == 0)
	{
		printf("�� �� �� �� : 0");
	}
	else
	{
	    printf("�� �� �� �� : %d", -int1);
	}
	
	return 0;
}
