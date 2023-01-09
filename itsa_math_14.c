#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int total;
    int day,hour,min,sec;
    scanf("%d",&total);
    day= total/86400;
    total = total%86400;
    hour = total/3600;
    total = total%3600;
    min = total/60;
    total = total%60;
    sec = total;
    printf("%d days\n",day);
    printf("%d hours\n",hour);
    printf("%d minutes\n",min);
    printf("%d seconds\n",sec);
    return 0;
}
