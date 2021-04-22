#include<stdio.h>
#include<string.h>

void swap(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(){
    int a,b;
    int *ap = &a,*bp = &b;
    scanf("%d %d",&a,&b);
    swap(ap,bp);
    printf("%d %d\n",a,b);
}
