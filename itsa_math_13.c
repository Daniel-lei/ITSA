#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int start_hour,start_min,end_hour,end_min;
    int start,end;
    scanf("%d %d",&start_hour,&start_min);
    scanf("%d %d",&end_hour,&end_min);
    start = start_hour*60+start_min;
    end = end_hour*60+end_min;
    int t = end - start;
    t = t/30;
    if (t<=4){
        t= t*30;
        printf("%d\n",t);
    }
    else if(t>=4 && t<=8){
        t = 4*30+(t-4)*40;
        printf("%d\n",t);
    }
    else{
        t = 4*30+4*40+(t-8)*60;
        printf("%d\n",t);
    }
    return 0;
}
