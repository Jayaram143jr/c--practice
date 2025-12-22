#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0, rem;
    
    while (original != 0) {
        original /= 10;
        digits++;
    }
    
    original = num;
    while (original != 0) {
        rem = original % 10;
        sum += pow(rem, digits);
        original /= 10;
    }

    return (sum == num);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number ✅\n", num);
    else
        printf("%d is not an Armstrong number ❌\n", num);
    return 0;
}