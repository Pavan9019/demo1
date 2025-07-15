#include <stdio.h>
#include "myfunctions.h"  // If you have a header file for prototypes

void biggest2() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2)
        printf("%d is bigger\n", num1);
    else if (num2 > num1)
        printf("%d is bigger\n", num2);
    else
        printf("Both numbers are equal\n");
}
