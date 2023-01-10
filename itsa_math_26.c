#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
    int num;
    while(scanf("%d",&num)!=EOF){
        for(int i =1;i<=num;i++){
            printf("%d*%d=%d\n",i,i,i*i);
        }
    }
     return 0;
}
