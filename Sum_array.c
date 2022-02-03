#include<stdio.h>
int main()
{
    int n;
    
    printf("How many values do you want to enter in array?");
    scanf("%d",&n);
    int a[n];
    int sum=0;
    printf("ENter the values\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(int i=0;i<n;i++)
    sum+=a[i];
    printf("Total sum is %d",sum);
    return 0;
}