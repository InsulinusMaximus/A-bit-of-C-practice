#include <stdio.h>
#include <conio.h>
#include <string.h>

int main (int argc, char* argv[])
{
    if (argc!=2)
    {
        printf ("Please, print two args (second is key word)!\n");
        return 1;
    }
    //char k1 = argv[1];
    int k[strlen (argv[1])];
    int j = 0;
    //int k = strlen (argv [1]);
    char p [101];
    printf ("Print, please, string for cipher: ");
    fgets(p, 100, stdin);
    fflush (stdin);
    printf ("%i   %i", k, j);
}
