#include <stdio.h>

int main() {
    int num;
    int f = 1;
    
    scanf("%d", &num);

    int i = 1;
    while(i <= num) {
        f = f * i;
        i++;
    }

    printf("Factorial : %d\n", f);

    return 0;
}
