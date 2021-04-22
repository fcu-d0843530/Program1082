#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void cmp1(char **string,)
void sort(int chose,char **string,int num){

}


int main(){
    int num = 1,i,chose;
    char tmp[100][100];
    char **string;

    while(num != 0){
        printf("請輸入字串數(輸入0結束)：");
        scanf("%d",&num);
        string = malloc(num * sizeof(char*));
        for(i = 0;i < num;i++){
            scanf("%s",tmp[i]);
            string[i] = malloc(strlen(tmp[i]) * sizeof(char));
            string[i] = tmp[i];
            //printf("%s",string[i]);
        }
        for(i = 0;i < num;i++){
            printf("%s",string[i]);
        }
        printf("選擇排序方式(1.以ASCII/2.以字典序)：");
        scanf("%d",&chose);

    }

}
