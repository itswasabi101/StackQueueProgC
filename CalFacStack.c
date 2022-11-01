#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef unsigned long long int ll;


ll stack[MAX];
int top = -1;

// Pushing into Stack
void push(ll num)
{
	while(num != 0)
	{
		top++;
		stack[top] = num;
		num--;
		if(top == MAX-1)
		{
			printf("\nStack overflow !!\n");
			exit(0);
		}
	}
}


// Calculating Factorial
void calc_facto()
{
	ll factorial = 1;
	while(top != -1)
	{
		factorial *= stack[top];
		top--;
	}
	printf("%d",factorial);
}


// Driver Code
int main()
{
	ll number;
	printf("Enter the nunber whose Factorial you want to calculate : ");
	scanf("%d",&number);
	
	if(number < 0)
		printf("\nInvalid Input !!!\n");
	else
	{
		push(number);
		printf("\n\nFactorial of ",number," is ");
		calc_facto();
	}
	
	
}
