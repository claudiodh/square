
#include <stdio.h>

void squareSide(int side);

int main(void)
{
    squareSide(3);
    return 0;
}

void squareSide(int side)
{
    for(int i = 0; i < side; i++)
    {
        printf("\n");

        for(int i =0; i < side; i++)
        {
            printf("* ");
        }
    }
}





