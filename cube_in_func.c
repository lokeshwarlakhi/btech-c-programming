#include<stdio.h>

int cube(int a){
    int c;
    c = a*a*a;
    return c;
}

int main(){
    int n;
    scanf("%d",&n);

    int re;
    re = cube(n);
    printf("%d",re);

    return 0;

}