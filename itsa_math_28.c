#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
    int a;
    while(scanf("%d",&a)!=EOF){
        int i=0;
        while(i<=a){
            i++;
            if(i%5==0&&i%7==0){
                printf("%d",i);
                break;
            }
        }
        i++;
        for(;i<=a;i++){
            if(i%5==0&&i%7==0){
                printf(" %d",i);
            }
        }
        printf("\n");
    }
     return 0;
}
