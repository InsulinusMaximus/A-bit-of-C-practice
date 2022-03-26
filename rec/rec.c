#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int n;
int sigma (int);

void main()
{
    printf ("Enter your integer: ");
    scanf ("%d", &n);
    
    printf ("Your sum is %d\n", sigma (n));
    getch ();
}

int sigma (int i)
{
if (i<=0)
    {
      return i;  
    }
 return i=i+sigma(i-1);

}

    







