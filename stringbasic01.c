#include<stdio.h>
int main(){
char arr[4]={'a','t','l','a'};
printf("%c\n",arr[2]);
printf("%p\n",&arr[0]);    
printf("%p\n",&arr[1]);  //ASCII->   'A'=65,'a'=97,'0'=48,'9'=57 ,'\0'=0 
printf("%p\n",&arr[2]);    
printf("%p\n",&arr[3]);    
    return 0;
}
// OUTPUT-
// l
// 0061FF1C
// 0061FF1D
// 0061FF1E
// 0061FF1F
