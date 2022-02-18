#include <stdio.h>

int main() {
	
	int n;
	printf("Enter the number of 5 digits\n");
    scanf("%d", &n);
    int sum=0;
    int value,value2;
    for(int i=0;i<5;i++)
    {
        value=n%10;
        sum+=value;
        value2=n/10;
        n=value2;
    }
    printf("%d",sum);
    return 0;
}
