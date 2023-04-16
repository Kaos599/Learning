#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void replace(char original[], char result[])
{
    int j = 0;
    for (int i = 0; i < strlen(original); i++)
    {
        result[j] = original[i];
        if ((original[i] >= 'A' && original[i] <= 'Z') || (original[i] >= 'a' && original[i] <= 'z'))
        {
            if (original[i] == 'A' || original[i] == 'a')
            {
                result[j] = '4';
            }
            else if (original[i] == 'E' || original[i] == 'e')
            {
                result[j] = '3';
            }
            else if (original[i] == 'I' || original[i] == 'i')
            {
                result[j] = '1';
            }
            else if (original[i] == 'O' || original[i] == 'o')
            {
                result[j] = '0';
            }
        }

        j++;
    }

    result[j] = '\0';
}



int main(int argc, string argv[]) {
    if (argc != 2) {
        printf("Usage: %s <string>", argv[0]);
        return 1;
    }
    char result[1000];
    replace(argv[1], result);
    printf("%s", result);
    return 0;
}
