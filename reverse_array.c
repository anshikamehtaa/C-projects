#include<stdio.h>
int main()
{
    int n;
    
    printf("How many values do you want to enter in array?");
    scanf("%d",&n);
    int a[n];
    printf("ENter the values\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("The reversed values are\n");
    for(int i=n-1;i>=0;i--)
    printf("%d ",a[i]);
    
    return 0;
}