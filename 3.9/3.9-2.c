#include<stdio.h>
#include<stdlib.h>

int main() {
    int **ptr,m,n,i,tmp = 0,j;
    scanf("%d %d",&m,&n);
    ptr = malloc(m * sizeof(int*));
    for(i = 0;i < m;i++){
        ptr[i] = calloc(n,sizeof(int));
    }

    for(i = 0;i < m;i++){
        for(j = 0;j < n;j++){
            ptr[i][j] = tmp+j+1;
        }
        tmp++;
    }

    for(i = 0;i < m;i++){
        for(j = 0;j < n;j++){
            printf("%2d",ptr[i][j]);
            if(j == n-1){
                printf("\n");
            }else{
                printf(" ");
            }
        }
    }
// OJTEST
    for(i = 0;i < m;i++){
        free(ptr[i]);
    }
    free(ptr);
    //完成歸還記憶體
    return 0;
}
