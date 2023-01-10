#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int is_prime(int num){
    int i;
    if(num==1){
        return 0;
    }
    else{
        for(i=2;i<num;i++){
            if(num%i==0){
                return 0;
            }
        }
    }
    return 1;
}
int main(void){
    int num;
    while(scanf("%d",&num)!=EOF){
        int max = 0;
        for(int j=1;j<num;j++){
            if(is_prime(j)){
                if(j>max){
                    max = j;
                }
            }
        }
        printf("%d\n",max);
        }
return 0;
}
