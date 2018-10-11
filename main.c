#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	
	printf("input a letter: ");
	scanf("%c", &c);
	
	if ('A' <= c && c <= 'Z')
	{
	    printf("대문자");
    }
    else if ('a' <= c && c <= 'z')
	{
		printf("소문자");
	}
	else if ('0' <= c && c <= '9')
	{
		printf("숫자");
	}
	else
	{
		printf("기타");
	}
	
	return 0;
}
