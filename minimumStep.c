#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int steps = (a / 3) + (a % 3 == 0 ? 0 : 1);

    printf("%d\n", steps);

    return 0;
}
