#include <cs50.h>
#include <stdio.h>

int req_height, width, height;
int main(void)
{
    do {
        printf("please enter the height of the pyramid: ");
        scanf("%d", &req_height);
    } while (req_height <= 0 || req_height > 8);

    for(height=1; height<=req_height; height++)
    {
        for(width=1; width<=req_height-height; width++)
        {
            printf(" ");
        }

        for(width=1; width<=height; width++)
        {
            printf("#");
        }

        printf("\n");
    }
}
