#include<stdio.h>
#include<string.h>

int main(){
    float a;
    float *aPtr = &a;
    scanf("%f",&a);
    *aPtr*=2;
    printf("%f\n",a);
}
