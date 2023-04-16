#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000000
const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    char msg[MAX_LENGTH];
    printf("Write a string: ");
    fgets(msg, MAX_LENGTH, stdin);

    for (int i = 0, n = strlen(msg); i < n; i++)
    {
        int decimal = msg[i];
        int binary[] = {0, 0, 0, 0, 0, 0, 0, 0};
        int j = 0;
        while (decimal > 0)
        {
            binary[j] = decimal % 2;
            decimal = decimal / 2;
            j++;
        }

        for (int k = (BITS_IN_BYTE - 1); k >= 0; k--)
        {
            print_bulb(binary[k]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
