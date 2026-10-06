#include <stdio.h>

int main() {
    float t;
    scanf("%f", &t);

    if (t > 100) {
        printf("Steam\n");
    } else if (t >= 0 && t <= 100) {
        printf("Water\n");
    } else {
        printf("Ice\n");
    }

    return 0;
}
