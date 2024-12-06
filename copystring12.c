#include<stdio.h>
#include<string.h>
int main(){
    char* s1="Physics Wallah";
    char*s2;
    s2=s1;
    printf("%s\n",s1);
    printf("%s\n",s2);
    return 0;
}
// OUTPUT-
// Physics Wallah
// Physics Wallah