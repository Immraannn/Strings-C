#include<stdio.h>
int main(){
char str[]="College Wallah";
char* ptr=str; //ptr now points to str[0]
int i=0;
while(*ptr!='\0'){
    printf("%c",*ptr);
    ptr++;
    i++;
}  
printf("%c",*ptr);
return 0;  
}
// OUTPUT-
// College Wallah