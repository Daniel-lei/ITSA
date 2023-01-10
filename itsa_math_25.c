#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
    int num;
    while(scanf("%d",&num)!=EOF){
        int sum =0 ;
        for(int i =1;i<=num;i++){
            if(i%3==0){
                sum+=i;
            }
        }
        printf("%d\n",sum);
    }
     return 0;
}
