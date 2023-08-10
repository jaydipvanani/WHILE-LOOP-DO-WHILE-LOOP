#include <stdio.h>

int main() {
    int i=1,n,sum=0;
     
    printf("Enter the value of N: ");
    scanf("%d", &n);

    while (i <= n) {
        sum = sum+i;
        i++;
    }

    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

}

