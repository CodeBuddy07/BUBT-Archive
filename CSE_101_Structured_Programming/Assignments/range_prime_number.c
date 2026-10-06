#include <stdio.h>

int main() {
    int lower_bound, upper_bound;
    scanf("%d %d", &lower_bound, &upper_bound);

    if (lower_bound < 2) {
        lower_bound = 2;
    }

    printf("All Prime Number of Range %d to %d\n", lower_bound, upper_bound);
    
    for (int num = lower_bound; num <= upper_bound; num++) {
        int is_prime = 1;
        
        for (int div = 2; div <= num / 2; div++) {
            if (num % div == 0) {
                is_prime = 0;
                break;
            }
        }
        
        if (is_prime) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
