#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int a;
    int ten=0,five=0,one=0;
    scanf("%d",&a);
    while(a>=10){
        ten++;
        a-=10;
    }
    while(a>=5){
        five++;
        a-=5;
    }
    while(a>0){
        one++;
        a--;
    }
    printf("NT10=%d\n",ten);
    printf("NT5=%d\n",five);
    printf("NT1=%d\n",one);
    return 0;
}
