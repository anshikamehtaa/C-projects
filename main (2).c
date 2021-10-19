#include<stdio.h>
#define MAX 30
int n;
int a[MAX];
int main ()
{
 printf ("How many elements you want to add?\n");
 scanf ("%d", &n);
 printf ("Enter the elements\n");
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
 printf("Alternate elements of array are:\n");
  for (int i = 0; i < n; i+=2)
  {
      printf("%d ",a[i]);
  }
   return 0;
}
