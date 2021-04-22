#include <stdio.h>
#include <stdlib.h>
int zj4(int a){
    if(a <= 0) a*=-1;
    return a;
}

int rul4(int nnum[1000],int n,int mnum){

    int i,j,ans = nnum[0] + nnum[1];
    for(i = 0;i < n;i++){
        for(j = i+1;j < n;j++){
            if(zj4(nnum[i] + nnum[j] - mnum) < zj4(ans - mnum))
                ans = nnum[i] + nnum[j];
        }
    }
    return ans;
}

int main(){
    int n,m,i,j,nnum[1000],mnum[25],ans[25];
    int casee = 0;
	while(1){
		scanf("%d",&n);
		if(n == 0) return 0;
	    for(i = 0;i < n;i++){
	        scanf("%d",&nnum[i]);
	    }
	    scanf("%d",&m);
	    for(i = 0;i < m;i++){
	        scanf("%d",&mnum[i]);
	    }
		printf("Case%d:\n",++casee);
        for(i = 0;i < m;i++){
            ans[i] = rul4(nnum,n,mnum[i]);
        }
	    for(i = 0;i < m;i++){
				printf("Closest sum to %d is %d.\n",mnum[i],ans[i]);
        }
	    printf("\n");
	}
}
