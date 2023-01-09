#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    double a,b;
    while(scanf("%lf",&a)!=EOF){
        b = a*a*10+0.5;
        b = floor(b)/10;
        printf("%.1lf\n",b);
    }
    return 0;
}
