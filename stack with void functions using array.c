#include<stdio.h>
#include<stdlib.h>
#define MAX 30
int add; 
   int a[MAX]={2,3,4,5,6,7};
    int c;
int top=-1;
void push(int add)
{
    if(top==MAX-1)
    {
        printf("Stack is full");
    }
    else
    {
   top= top+1;
    a[top]=add;
   
    }
}
void pop()
{ 
    int temp;
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
    printf("Popped element is %d\n",a[top]);
    top=top-1;
    }
}
void display()
{
   if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        for(int i=top;i>=0;--i)
        printf("%d ",a[i]);
    }
}
int main()
{
   
while(1)
{   
   
    printf("Stack Menu\n");
    printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    printf("Enter your choice:\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("Enter the element to be entered\n");
        scanf("%d",&add);
         push(add);
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        exit(0);
        break;
        default:
        printf("Wrong choice!\n");
    }
}
return 0;
}