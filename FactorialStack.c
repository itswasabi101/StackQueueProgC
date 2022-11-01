int claim(int *s, int top, int ele)

{

int i;

if (top >= MAX)

{

printf("\nStack Overflow");

}

else

{

s[++top] = ele;

}

return top;

}

//kpop method

int kpop(int *a, int *pop)

{

if ((*top) >= 0)

{

(*top) = (*pop) - 1;

return a[(*pop) + 1];

}

else

{

printf("Stack underflow\n");

return 0;

}

}

void main()

{

int n;

int i;

int ans = 1 ;

int POP = -1;

int s[MAX];

printf("\nEnter number: ");

scanf("%d",&n);

if(n<=0)

{

printf("\nThe number can not be less than 0");

}

else

{

for(i = n ; i >0 ; i--)

{

TOP = claim(s,POP, i);

}

while(TOP>=0)

{

ans = ans * kpop(s,&POP);

}

printf("\nFactorail is %d\n",ans);

}

}


