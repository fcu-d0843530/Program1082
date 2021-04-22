#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef union _information{
    int i;
    float f;
    char s[16];
}information;


typedef struct _array{
    information infor;
    char type;
}array;

void scan(array *arr,int now){
    while(1){
        printf("��������G(i�Gint/f�Gfloat/s�Gchar[16])�G");
        getchar();
        scanf("%c",&(arr[now].type));
        printf("��J��ơG");
        if(arr[now].type == 's'){
            scanf("%s",&arr[now].infor.s);
            break;
        }
        else if(arr[now].type == 'i'){
            scanf("%d",&arr[now].infor.i);
            break;
        }
        else if(arr[now].type == 'f'){
            scanf("%f",&arr[now].infor.f);
            break;
        }
        else{
            printf("��J���~�I\n");
            continue;
        }
    }

}

int main(){
    int now = 0,chose,i;
    array *arr;
    while(1){
        printf("��ܡG(1.�s�W/2.�L�X/0.����)�G");
        scanf("%d",&chose);
        if(chose == 1){
            if(now > 0) arr = realloc(arr,(now+1) * sizeof(array));
            else arr = malloc(1* sizeof(array));
            scan(arr,now);
            now++;
        }
        else if(chose == 2){
            for(i = 0;i < now;i++){
                if(arr[i].type == 'i') printf("%d\n",arr[i].infor.i);
                else if(arr[i].type == 'f') printf("%f\n",arr[i].infor.f);
                else printf("%s\n",arr[i].infor.s);
            }
        }
        else if(chose == 0) {
            printf("�����{��\n");
            free(arr);
            break;
        }
        else {
            printf("��J���~�I\n");
            continue;
        }
    }

}

