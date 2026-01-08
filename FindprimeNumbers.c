#include <stdio.h>

int main() {
    int start, end, i, j, flag;

    printf("Enter the Starting number : ");
    scanf("%d", &start);

    printf("Enter the Ending number : ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: \n", start, end);

    for (i = start; i <= end; i++) {
        if (i < 2)
          continue;

        flag = 1; //assume prime

    for (j = 2; j * j <= i; j++) {
        if (i % j == 0) {
            flag = 0; //not prime
            break;
        }
    }
    if (flag == 1)
        printf("%d ", i);
    }

    return 0;
}