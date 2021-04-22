#include <stdio.h>
#include <stdlib.h>

int main(){
    int *oddArray,*evenArray,a,b,i,tmp,j = 0,k = 0,ans_odd = 0,ans_even = 0;

    scanf("%d %d",&a,&b);
    oddArray = calloc(a,sizeof(int));
    evenArray = calloc(b,sizeof(int));
    for(i = 0;i < a+b;i++){
        scanf("%d",&tmp);
        if(tmp % 2 == 0){
            evenArray[j] = tmp;
            j++;
        }
        else{
            oddArray[k] = tmp;
            k++;
        }
    }
    for(i = 0;i < a;i++){
        printf("%d",oddArray[i]);
        if(i < a-1) printf("+");
        ans_odd+=oddArray[i];
    }
    printf("=%d\n",ans_odd);

    for(i = 0;i < b;i++){
        printf("%d",evenArray[i]);
        if(i < b-1) printf("+");
        ans_even+=evenArray[i];
    }
    printf("=%d",ans_even);

    free(oddArray);
    free(evenArray);
    return 0;
}
