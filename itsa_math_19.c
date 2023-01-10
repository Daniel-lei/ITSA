#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
        int t;
        double money;
        while(scanf("%d",&t)!=EOF){
            if(t<=800){
                money = t*0.9;
            }
            else if(t<1500){
                money = t*0.9*0.9;
            }
            else{
                money = t*0.9*0.79;
            }
            printf("%.1lf\n",money);
        }
     return 0;
}
