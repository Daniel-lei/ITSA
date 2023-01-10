#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
    int pay,t;
    double sum;
    while(scanf("%d %d",&t,&pay)!=EOF){
        if(t<=60){
            sum = pay*t;
        }
        else if(t<=120){
            sum = pay*60+pay*(t-60)*1.33;
        }
        else{
            sum = pay*60+pay*60*1.33+pay*(t-120)*1.66;
        }
        printf("%.1lf\n",sum);
    }
     return 0;
}
