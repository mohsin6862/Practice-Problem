#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int s_even = (a/5)-4;
    for(int i = s_even;i<s_even +10;i+=2){
        printf("%d ",i);
    }
}