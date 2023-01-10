#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        int sum =0 ;
        if(a>=b){
            for(int i=b;i<=a;i++){
                sum+=i;
            }
        }
        else{
            for(int i =a;i<=b;i++){
                sum+=i;
            }
        }
        printf("%d\n",sum);
    }
     return 0;
}
