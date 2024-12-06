 #include<stdio.h>
 int main(){
 char str[15];
 puts("Enter a string :");
 gets(str);
 puts("The size is :"); //Automatically \n bhi de deta hai
 //size
 int size=0;
 int i=0;
 while(str[i]!='\0'){
    size++;
    i++;
 }
 printf("%d",size);
 puts(str);
 return 0;   
 }
//  OUTPUT-
//  Enter a string :
// Imran Shakeel
// The size is :
// 13Imran Shakeel