#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int a;
    while(scanf("%d",&a)!=EOF){
        printf("1");
        for(int i=2;i<=a;i++){
            if(a%i==0){
                printf(" %d",i);
            }
        }
        printf("\n");
    }
    return 0;
}
