#include <stdio.h>

typedef union _matrix{
    int a[4][4];
    int b[16];
}matrix;

int main(){
    matrix num;
    int i,j,tmp[4][4];
    for(i = 0;i < 4;i++){
        for(j = 0;j < 4;j++){
           scanf("%d",&num.a[i][j]);
        }
    }
    for(i = 0;i < 4;i++){
        for(j = 0;j < 4;j++){
            tmp[i][j] = num.a[i][j];
        }
    }
    for(i = 0;i < 4;i++){
        for(j = 0;j < 4;j++){
           num.a[i][j] = tmp[j][i];
        }
    }
    for(j = 0;j < 16;j++){
       printf("%d",num.b[j]);
       if(j < 15) printf(" ");
    }

}
