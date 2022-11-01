#include <stdio.h>  
  
# define max 6  
int queue[max];   
int front=-1;  
int end=-1;  

void enqueue(int element)  
{  
    if(front==-1 && end==-1)   
    {  
        front=0;  
        end=0;  
        queue[end]=element;  
    }  
    else if((end+1)%max==front)  
    {  
        printf("Queue is overflow..");  
    }  
    else  
    {  
        end=(end+1)%max;        
        queue[end]=element;    
    }  
}  
  

int dequeue()  
{  
    if((front==-1) && (end==-1))   
    {  
        printf("\nQueue is underflow..");  
    }  
 else if(front==end)  
{  
   printf("\nThe dequeued element is %d", queue[front]);  
   front=-1;  
   end=-1;  
}   
else  
{  
    printf("\nThe dequeued element is %d", queue[front]);  
   front=(front+1)%max;  
}  
}  

void display()  
{  
    int i=front;  
    if(front==-1 && end==-1)  
    {  
        printf("\n Queue is empty..");  
    }  
    else  
    {  
        printf("\nElements in a Queue are :");  
        while(i<=end)  
        {  
            printf("%d,", queue[i]);  
            i=(i+1)%max;  
        }  
    }  
}  
int main()  
{  
    int choice=1,x;   
      
    while(choice<4 && choice!=0)   
    {  
    printf("\n Press 1: Insert an element");  
    printf("\nPress 2: Delete an element");  
    printf("\nPress 3: Display the element");  
    printf("\nEnter your choice:");  
    scanf("%d", &choice);  
      
    switch(choice)  
    {  
          
        case 1:  
      
        printf("Enter the element which is to be inserted:");  
        scanf("%d", &x);  
        enqueue(x);  
        break;  
        case 2:  
        dequeue();  
        break;  
        case 3:  
        display();  
  
    }}  
    return 0;  
}  
