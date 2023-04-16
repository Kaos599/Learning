#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void)
{
    string input = get_string("Text: ");
    int letters = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z'))
            letters++;
    }

    int words = 1;
    for (int i = 0; i <strlen(input); i++)
    {
      if(input[i] == ' ')
       words++;
    }

int sentences = 0;
for (int i = 0; i < strlen(input); i++ )
{
if(input[i] == '.' || input[i] == '?' || input[i] == '!')
sentences++;
}


float calc = ((0.0588 * letters / words *100) - (0.296 * sentences / words * 100) - 15.8);
int index = round(calc);

if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 0 )
    {
        printf("Before Grade 1\n");
    }
    else
     {
        printf("Grade %d\n", index);
    }

    return 0;
}
