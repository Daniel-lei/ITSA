#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    double a;
    double b;
    while(scanf("%lf",&a)!=EOF){
        b= a*9;
        b= b/5+32;
        printf("%.1lf\n",b);
    }
    return 0;
}
