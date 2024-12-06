#include<stdio.h>
#include<string.h>
int main(){
char s1[]="Physics Wallah";
char s2[]="Physics Wallah";
s2[0]='M';
printf("%s\n",s1);
printf("%s",s2);
return 0;    
}
// OUTPUT-
// Physics Wallah
// Mhysics Wallah