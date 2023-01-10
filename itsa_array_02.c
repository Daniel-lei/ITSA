#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int a[6];
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    printf("%d",a[5]);
    for(int i=4;i>=0;i--){
        printf(" %d",a[i]);
    }
    printf("\n");
    return 0;
}
