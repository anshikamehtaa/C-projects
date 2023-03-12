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
  int largest = a[0];
  int s_large = a[0];
  for (int i = 0; i < n; i++)
    {
      if (a[i] > largest)
	{
	  s_large = largest;
	  largest = a[i];
	}
      else if (a[i] > s_large && a[i] < largest)
	{

	  s_large = a[i];
	}
    }
  printf ("\n");
  printf ("Largest number is %d \n", largest);
  printf ("Second largest number is %d\n", s_large);

  printf ("\n");
  printf ("For Smallest:\n");
  int smallest = a[0];
  int s_smallest = a[0];
  for (int i = 0; i < n; i++)
    {
      if (a[i] < smallest)
	{
	  s_smallest = smallest;
	  smallest = a[i];
	}
      else if (a[i] < s_smallest && a[i] > smallest)
	{
	  s_smallest = a[i];
	}
    }
  printf ("Smallest number is %d\n", smallest);
  printf ("Second Smallest number is %d\n", s_smallest);
  return 0;
}
