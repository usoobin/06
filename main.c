#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination(int n,int r)
{
	return (factorial(n)/(factorial(n-r)*factorial(r)));
}

int factorial(int num)
{
	int i;
	int res = 1;
	for(i = 1; i <= num; i++)
	{
		res = res *i;
	}	
	return res;
}



int get_integer()
{	
	int num;
	
	printf("값을 입력해주세요");
	scanf("%i", &num);
	
	return num;
}


int main(int argc, char *argv[]) 
{
	int n,r;
	int result;
	
	n = get_integer();
	r = get_integer();
	
	result = combination(n,r);
	
	printf("결과값:%i", result);
}
