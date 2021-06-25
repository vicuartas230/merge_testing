#include <stdio.h>

int main()
{
    char *c = "Sorry\n";
    int i = 0;

    while (c[i])
    {
        printf("%c", c[i]);
        i++;
    }
}
