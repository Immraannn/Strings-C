#include<stdio.h>
int main(){
    char str[20]="Collegewallah";
    str[1]=98;
    str[2]='i';
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);//   str[i] and i[str] both are same 
        i++;
    }
    return 0;
}
// OUTPUT-
// Cbilegewallah