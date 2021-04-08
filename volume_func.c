#include<stdio.h>

int vol(int l, int b, int h)
{
    int vol = l*b*h;
    return vol;
}

int main(){
    int l,b,h;

    scanf("%d%d%d",&l,&b,&h);
    int v= vol(l,b,h);
    printf("%d",v);

    return 0;
}