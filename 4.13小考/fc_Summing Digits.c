#include <stdio.h>
#include <stdlib.h>

int main(){
    char num[20];
    int i,ans = 0,tmp;

    //printf("%s",num);
    while(1){
        ans = 0;
        scanf("%s",num);
        if(num[0] == '0') return 0;
        for(i = 0;i < strlen(num);i++){
            ans += (num[i]-48);
        }
        while(1){
            if(ans < 10) break;
            else {
                tmp = ans;
                ans = 0;
                for(i = 0;i < 3;i++){
                    ans = tmp/10 + tmp%10;
                }
            }
        }
        printf("%d\n",ans);
    }


}