#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int dst;
    int speed;
    speed = 10000-30*254;
    int t;
    while(scanf("%d",&dst)!=EOF){
        t=0;
        t = 10000*dst/speed;
        if(dst%speed>0){
            t++;
        }
        printf("%d\n",t);
    }
    return 0;
}
