#include <stdio.h>

int main() {
    float rad, vol;
    scanf("%f", &rad);

    vol = (4.0 / 3.0) * 3.14159 * (rad * rad * rad);

    printf("Volume of sphere = %.2f\n", vol);

    return 0;
}
