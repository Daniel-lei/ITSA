#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int a[6];
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    int sum =0;
    for(int i =0;i<6;i++){
        sum+=a[i]*a[i]*a[i];
    }
    printf("%d\n",sum);
    return 0;
}
