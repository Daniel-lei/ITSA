#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int main(void){
    int num;
    while(scanf("%d",&num)!=EOF){
        char temp[35];
        sprintf(temp,"%x",num);
        for(int i =0;i<35;i++){
            temp[i]=toupper(temp[i]);
        }
        printf("%s\n",temp);
    }
     return 0;
}
