#include<stdio.h>
#include<conio.h>

void main(){
    char s1[30],s2[30],i;
    gets(s1);
    for(i=0;s1[i]!='\0';i++){
        s2[i]=s1[i];
    }s2[i]='\0';
    puts(s1);
    puts(s2);
}