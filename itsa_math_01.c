#include<stdio.h>
#include<stdlib.h>
int main(){
    float a,b,h;
    float answer;
    while(scanf("%f %f %f",&a,&b,&h)!=EOF){
        answer =(a+b)*h/2;
        printf("Trapezoid area:%.1f\n",answer);
    }
    return 0;
}
