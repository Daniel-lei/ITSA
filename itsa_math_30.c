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
        if(is_prime(num)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

        }
return 0;
}
