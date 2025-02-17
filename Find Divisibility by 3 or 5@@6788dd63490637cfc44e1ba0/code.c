#include<stdio.h>
int main(){
    int a;
    scanf("%d %d",&a);
    if(a%3==0 && a%5==0){
        printf("Divisible");
    }
    else{
        print("Not Divisible");
    }
    return 0;
}