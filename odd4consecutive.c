#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int s_odd=(a/4)-4;
    for(int i = s_odd; i<s_odd +8;i++){
        // printf("%d ",i);
        if(i%2!=0){
            printf("%d ",i);
        }
    }
}