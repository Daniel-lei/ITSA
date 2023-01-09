#include<stdio.h>
#include<stdlib.h>
int main(){
    float a,b;
    float answer;
    while(scanf("%f %f",&a,&b)!=EOF){
        answer =a*b/2;
        printf("%.1f\n",answer);
    }
    return 0;
}
