#include <stdio.h>
#include <stdlib.h>

int add(int a, int b){//�[�k
    return a + b;
}
int sub(int a, int b){//��k
    return a - b;
}
int multi(int a, int b){//���k
    return a * b;
}
int divide(int a, int b){//���k
    return a / b;
}
int mod(int a, int b){ //���l��
    return a % b;
}


int main(){
    int chose = 1,fail = 0,a,b,i;
    char zj6cl4[5] = {"+-*/%"};//�Ÿ���
    int (*opt[])(int ,int) = {add,sub,multi,divide,mod};
    while(chose != 0){
        fail = 0;
        while(fail == 0){
            fail = 1;
            puts("�п��(1.�[�k/2.��k/3.���k/4.���k/5.���l��/0.���})�G");
            scanf("%d",&chose);
            if(chose > 5 || chose < 0) fail = 0;
        }
        if(chose != 0){
            printf("�п�J��Ӿ�ơG");
            scanf("%d %d",&a,&b);
            printf("%d %c %d = %d\n",a,zj6cl4[chose - 1],b,opt[chose - 1](a , b));

        }

    }


}
