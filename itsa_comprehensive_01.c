#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int a;
    while(scanf("%d",&a)!=EOF){
        switch(a){
    case 1:
        printf("Person\n");
        break;
    case 2:
        printf("Fairy\n");
        break;
    case 3:
        printf("Dwarf\n");
        break;
        }
    }
    return 0;
}
