#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>


int main()
{
	int n;
	printf ("Print your array size: ");
	scanf ("%d", &n);
	printf ("\n");
	 int a[n];
  srand(time(NULL));
  for (int i = 0; i<n; i++)
  {
    a[i] = rand() % 100;
    printf("%d ", a[i]);
  }

	for (int i = 0; i < n; i++)
	{
		int j=i+1;
		if (a [i]>a [j])
		{
			i=i^j;
			j=i^j;
			i=i^j;
			printf("%d ", a[i]);
		}
		printf("%d ", a[i]);

	}
	
	getch();
	return 0;
}
