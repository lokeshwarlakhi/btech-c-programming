// VOWEL OR CONSONANTS
#include<stdio.h>
#include<conio.h>

void main(){
char a;
printf("enter the cahracter \n");
scanf("%c",&a);

if (a=='a' || a=='e' || a == 'i' || a=='o' || a=='u' || a=='A' || a=='E' || a == 'I' || a=='O' || a=='U'){
    printf("this is a vowel");
}
else{
    printf("this is a consonant");

}

getch();

}