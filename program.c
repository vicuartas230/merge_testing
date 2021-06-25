#include <stdio.h>

int main()
{
    char *c = "Holberton";
    int i = 0;

    while (c[i])
    {
        printf("%c", c[i]);
        i++;
    }
}
