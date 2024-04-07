#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a, &b);
    int rima = (a+b)/2;
    int mina = rima -b;
    printf("%d %d",rima,mina);
}