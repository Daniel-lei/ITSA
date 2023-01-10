#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    char a;
    while(scanf("%c",&a)!=EOF){
        if(a=='E'){
            printf("ByeBye\n");
        }
        else if(a=='M'){
            printf("Male\n");
        }
        else if(a=='F'){
            printf("Female\n");
        }
    }
    return 0;
}
