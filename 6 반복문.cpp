#include <stdio.h>

int main() {
    // for() 루프 예제
    printf("Using for loop:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // while() 루프 예제
    printf("Using while loop:\n");
    int j = 1;
    while (j <= 5) {
        printf("%d ", j);
        j++;
    }
    printf("\n");

    return 0;
}

