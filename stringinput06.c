#include<stdio.h>
#include<string.h>
int main(){
char str[40];
printf("Enter the string :");
//scanf("%s",str);// only first word will be considered before space
gets(str);  //entire word will be considered before or after  space
printf("you input was %s\n",str);
puts(str);
return 0;   
}
// OUTPUT-
// Enter the string :imran is badmos
// you input was imran is badmos
// imran is badmos