#include<stdio.h>
int main9(){
    int a,b;
    scanf("%d %d" , &a , &b);
    if((a>0 && b<0) || (a<0 && b>0)){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;

}
