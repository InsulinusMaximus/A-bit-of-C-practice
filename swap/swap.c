#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(int a, int b)
{
    printf ("Enter two intager: ");
    scanf ("%d %d", &a, &b);


    a=a^b;
    b=a^b;
    a=a^b;

printf ("%d  %d ",a, b);
    getch();
    return 0;
}
