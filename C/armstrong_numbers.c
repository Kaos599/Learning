#include <stdio.h>
#include <math.h>
              

int isArmstrong(int num) {
    int sum = 0; 
    int temp = num; 
    int order = (int) log10(num) + 1; 

    
    while (temp > 0) {
        int digit = temp % 10; 
        sum += (int) pow(digit, order); 
        temp /= 10; 
    }

    
    return (sum == num);
}


int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    }
    else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
