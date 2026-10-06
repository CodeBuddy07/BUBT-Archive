#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, sum_val;
    
    scanf("%d", &limit);
    printf("First %d Fibonacci numbers:\n", limit);
    
    for (int k = 0; k < limit; k++) {
        printf("%d ", a);
        sum_val = a + b;
        a = b;
        b = sum_val;
    }
    printf("\n");

    return 0;
}
