#include<stdio.h>
int main(){
    char a;
    if((a>='A' && a>='Z')){
        printf("Uppercase");
    }
    if((a>='a' && a>='z')){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}