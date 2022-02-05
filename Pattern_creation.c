#include<stdio.h>
int main()
{
    int n;
    printf("Pattern Creation\n");
    printf("How many values do you want to enter?\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    for(int j=0;j<i;j++)
    {
    if(j==0)
    {
        for(int t = 0; t < n- i; t++)
        printf(" ");
            }
            
            printf("#");
           
    } 
     printf("\n");   
    }
    return 0;
}

