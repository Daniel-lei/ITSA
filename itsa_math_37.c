#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==0){
        if(b==0){
            printf("Origin\n");
        }
        else{
            printf("y-axis\n");
        }
    }
    else{
        if(b==0){
            printf("x-axis\n");
        }
        else{
            if(a>0&&b>0){
                printf("1st Quadrant\n");
            }
            else if(a>0&&b<0){
                printf("4th Quadrant\n");
            }
            else if(a<0&&b>0){
                printf("2nd Quadrant\n");
            }
            else{
                printf("3rd Quadrant\n");
            }
        }
    return 0;
    }
}
