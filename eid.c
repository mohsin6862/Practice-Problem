#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int each_child = a/b;
    printf("%d ",each_child);
    int left_over = a%b;
    printf("%d",left_over);
}