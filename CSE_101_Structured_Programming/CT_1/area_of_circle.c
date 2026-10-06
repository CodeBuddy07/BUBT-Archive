#include <stdio.h>

int main() {
    float radius, circle_area;
    
    scanf("%f", &radius);

    circle_area = 3.14159 * radius * radius;
    printf("Area: %.2f\n", circle_area);

    return 0;
}
