#include<stdio.h>
int main(){
    char arr[]="College wallah is best";//   \0 is already given by computer
    printf("%c\n",arr[3]);
    printf("%d\n",arr[3]);
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}
// OUTPUT-
//l
//108
// College wallah is best