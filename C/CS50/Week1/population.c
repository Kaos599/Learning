#include <cs50.h>
#include <stdio.h>

int pop, end_pop, years_needed, year;

int main(void)
{
    do {
    printf("Provide a starting size for the llama population: ");
    scanf("%d", &pop);
    } while (pop < 9);


    do {
     printf("Provide an ending size for the llama population: ");
    scanf("%d", &end_pop);
      } while ( end_pop < pop);

    year = 0;
    while (pop < end_pop) {
        year++;
        pop += (pop / 3) - (pop / 4);
    }

    // Print the number of years
    printf("Years: %d\n", year);

    return 0;
}
