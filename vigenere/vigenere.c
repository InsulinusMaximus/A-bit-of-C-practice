#include <stdio.h>
#include <conio.h>
#include <string.h> // для функции strlen - подсчитывает длинну строки
#include <ctype.h> // для функции isalpha - проверяет, является ли символ алфавитным; для функции islower - проверяет символа на регистр; для функции isdigit - проверяет является ли символ цифрой.
#include <stdlib.h> // для функции atoi - переводит строку str в целое число int.

//ci = (pi + kj) % 26

int main (int argc, char* argv[100])
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
    //printf ("%c   %i", k1, k);
    for (int i = 0; i < strlen (p); i++)
    {
        
        if ((p[i]>= 'A') && (p[i]<= 'Z'))
        {
            p[i] = 'A' + ((p[i] - 'A' + k[j])%26);
            j = (j + 1)% strlen (argv[1]);
        }
        else if ((p[i]>= 'a') && (p[i]<= 'z'))
        {
            p[i] = 'a' + ((p[i] - 'a' + k[j])%26);
            j = (j + 1)% strlen (argv[1]);
        }
    }
    printf ("Your cipher is %s\n", p);
}












            