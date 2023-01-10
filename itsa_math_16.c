int main(){
    int x,y;
    int a;
    while(scanf("%d %d",&x,&y)!=EOF){
        a = abs(x)*abs(x)+abs(y)*abs(y);
        float temp = 1;
        while(abs(temp-a/temp)>1e-6){
            temp = (temp+a/temp)/2;
        }
        if(temp<=100){
            printf("inside\n");
        }
        else{
            printf("outside\n");
        }
    }
    return 0;
}
