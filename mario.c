#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height is: ");
    }
    while (height <= 0 || height > 8);

    for (int i = 1; i <= height; i++)
    {
        int j;
        for (j = 1; j <= height - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= height - j; k++)
        {
            printf("#");
        }

        printf("  ");

        for (i = 0; i <= height - j; i++)
        {
            printf("#");
        }
        printf("\n");
    }

}