#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int d_age = a/5;
    int f_age = a-d_age;
    printf("%d %d",f_age,d_age);
}