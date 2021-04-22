#include <stdio.h>
typedef enum _bool{
    False,
    True

}bool;

int main(){
    bool test1,test2,ans;
    char a[10],b,c[10];
    while(scanf("%s %c %s",a,&b,c) != EOF){
        if(a[0] == 'T') test1 = True;
        else test1 = False;

        if(c[0] == 'T') test2 = True;
        else test2 = False;

        if(b == '|') ans = test1 || test2;
        if(b == '&') ans = test1 && test2;
        if(b == '^') ans = test1 ^ test2;

        if(ans == 1) printf("True\n");
        else printf("False\n");
    }


}
