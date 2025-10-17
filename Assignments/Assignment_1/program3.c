#include <stdio.h>

void Display()
{
    int i = 0;
    i = 5;
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
        printf("\n");
    }
}

int main()
{
    Display();
    return 0;
}