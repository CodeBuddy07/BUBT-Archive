#include <stdio.h>

int main() {
    int salary;
    float rent_amount;

    scanf("%d", &salary);

    if (salary < 10000) {
        rent_amount = salary * 0.55;
    } else {
        rent_amount = salary * 0.45;
    }

    printf("House rent will be: %.2f\n", rent_amount);

    return 0;
}
