#include <stdio.h>

int main() {
    // for() ���� ����
    printf("Using for loop:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // while() ���� ����
    printf("Using while loop:\n");
    int j = 1;
    while (j <= 5) {
        printf("%d ", j);
        j++;
    }
    printf("\n");

    return 0;
}

