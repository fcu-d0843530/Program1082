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
        printf("�п�J�r���(��J0����)�G");
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
        printf("��ܱƧǤ覡(1.�HASCII/2.�H�r���)�G");
        scanf("%d",&chose);

    }

}
