#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int i;
    int a =1;
    while(scanf("%d",&i)!=EOF){
        a=1;
        if(i>31){
        printf("Value of more than 31\n");
        }
        else{
            while(i!=0){
                a = a*2;
                i--;
            }
            printf("%d\n",a);
        }
    }

    return 0;
}
