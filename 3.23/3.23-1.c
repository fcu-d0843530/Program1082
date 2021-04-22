#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
    char NID[100][100],name[100][100];
    int eji6jp6,eng,gj4,ao3gj4,wu3m4;
}classmate[100];

int main(){
    int num = 0,j,i;
    double tmp_ave;
    double average[100];
    //struct student classmate[100];
    struct student tmp;
    while(scanf("%s %s %d %d %d %d %d",classmate[num].NID,classmate[num].name,&classmate[num].eji6jp6,&classmate[num].eng,&classmate[num].gj4,&classmate[num].ao3gj4,&classmate[num].wu3m4) != EOF){
        num++;
    }
    for(j = 0;j < num;j++){
        average[j] = (double)(classmate[j].eji6jp6 + classmate[j].eng + classmate[j].gj4 + classmate[j].ao3gj4 + classmate[j].wu3m4)/5;
    }
//    for(j = 0;j < num;j++){
//        printf("%s %s %d %d %d %d %d",classmate[j].NID,classmate[j].name,classmate[j].eji6jp6,classmate[j].eng,classmate[j].gj4,classmate[j].ao3gj4,classmate[j].wu3m4);
//    }
    for(i = 0;i < num-1;i++){
        for(j = 0;j < num-1-i;j++){
            if(average[j] < average[j+1]){
                tmp = classmate[j];
                classmate[j] = classmate[j+1];
                classmate[j+1] = tmp;
                tmp_ave = average[j];
                average[j] = average[j+1];
                average[j+1] = tmp_ave;
            }
        }
    }
    for(j = 0;j < num;j++){
        printf("%s %s %d %d %d %d %d %.2f\n",classmate[j].NID,classmate[j].name,classmate[j].eji6jp6,classmate[j].eng, classmate[j].gj4, classmate[j].ao3gj4,classmate[j].wu3m4,average[j]);
    }
}
