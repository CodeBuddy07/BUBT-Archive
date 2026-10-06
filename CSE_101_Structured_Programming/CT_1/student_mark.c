#include <stdio.h>

int main() {
    int max_marks, obtained_marks;
    scanf("%d %d", &max_marks, &obtained_marks);

    float pass_threshold = max_marks * 0.6;

    if (obtained_marks >= pass_threshold) {
        printf("He will get 1000 tk.\n");
    } else {
        printf("He will get 500 tk.\n");
    }

    return 0;
}
