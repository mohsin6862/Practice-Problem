#include <stdio.h>

int main() {
    int a;


    scanf("%d", &a);

   
    for (int i = 0; i < 4; i++) {
        printf("%d", a % 10); 
        a /= 10; 
    }
    printf("\n");

    return 0;
}
