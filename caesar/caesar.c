#include <stdio.h>
#include <conio.h>
#include <string.h> // для функции strlen - подсчитывает длинну строки
#include <ctype.h> // для функции isalpha - проверяет, является ли символ алфавитным; для функции islower - проверяет символа на регистр; для функции isdigit - проверяет является ли символ цифрой.
#include <stdlib.h> // для функции atoi - переводит строку str в целое число int.

int main (int argc, char* argv[])
{
    if (argc!=2)
    {
        printf ("Please, print two args!\n");
        return 1;
    }
    int k = atoi(argv [1]);
    char str [101] = {'0'};
    printf ("Well, now print string for cipher: ");
    fgets (str, 100, stdin);
    for (int i = 0; i < strlen (str); i++)
    {
        if ((str[i]>= 'A') && (str[i]<= 'Z'))
        {
            str[i] = 'A' + ((str[i] - 'A' + k) % 26);
        }
        else if ((str[i]>= 'a') && (str[i]<= 'z'))
        {
            str[i] = 'a' + ((str[i] - 'a' + k) % 26);
        }
    }
    printf ("Your cipher string is: %s\n", str);
    printf ("Goodbye!\n");
    
    getch();
}









