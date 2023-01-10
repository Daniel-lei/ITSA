#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
    int num;
    while(scanf("%d",&num)!=EOF){
        unsigned long long int sum = 1;
        for(int i=1;i<=num;i++){
            sum*=i;
        }
        printf("%llu\n",sum);
    }
     return 0;
}
