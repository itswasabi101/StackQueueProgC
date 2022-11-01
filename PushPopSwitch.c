#include <stdio.h>   
int stack[100],i,j,choice=0,n,top=-1;  
void push();  
void pop();  
void peek();
void show();  
int main ()  
{  
      
    printf("Enter the number of elements in the stack ");   
    scanf("%d",&n);  
    while(choice != 4)  
    {  
        printf("Choose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Peek\n5.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                show();  
                break;  
            }  
            case 4:   
            {  
                peek();  
                break;   
            }  
            case 5:
            	{
            		printf("Exiting");
				}
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        };  
    }  
}   
  
void push ()  
{  
    int val;      
    if (top == n )   
    printf("\n Overflow");   
    else   
    {  
        printf("Enter the value?");  
        scanf("%d",&val);         
        top = top +1;   
        stack[top] = val;   
    }   
}   
  
void pop ()   
{   
    if(top == -1)   
    printf("Underflow");  
    else  
    top = top -1;   
}   
void peek()
{
	if(top==-1)
	printf("Stack is empty");
	else
	return(stack[top]);
}
void show()  
{  
    for (i=top;i>=0;i--)  
    {  
        printf("%d\n",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("Stack is empty");  
    }  
}
