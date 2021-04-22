#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char **a,char **b){
    char *tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}


void strSort(char *arr[100],int nStr){
    int i,j;
    for(i = 0;i < nStr-1;i++){
        for(j = 0;j < nStr-1-i;j++){
            //printf("´H¤h%p\n",arr[i]);
            if(strcmp(arr[j],arr[j+1]) > 0){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
//    for(i = 0;i < nStr;i++){
//        printf("´H¤h%s\n",arr[i]);
//    }
}


int main(){
    char strArr[100][100],*ptrArr[100];
    int n,i;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%s",strArr[i]);
    }
    for(i = 0;i < n;i++){
        ptrArr[i] = strArr[i];
    }
//    for(i = 0;i < n;i++){
//        printf("%s\n",ptrArr[i]);
//        if(strcmp(ptrArr[i],ptrArr[i+1]) > 0){
//            swap(&ptrArr[i],&ptrArr[i+1]);
//        }
    //}
    //printf("%p",&strArr[0]);
    strSort(ptrArr,n);
    for(i = 0;i < n;i++){
        printf("%s\n",ptrArr[i]);
    }


}




void swap(char **a, char **b){
    //swap

}

void strSort(char *arr[100], int nStr){
	//sort
}

int main(){
	int n;
	char strArr[100][100];
	char *ptrArr[100];
	//input

  	//sort & output
}
