#include<stdio.h>

#define rep(i,n) for(int i=0;i<n;i++)
#define reps(i,n) for(int i=1;i<=n;i++)

int n,k;
int aa[111111];

int getinput(){
	scanf("%d%d",&n,&k);
	if(n==0)return -1;
	rep(i,n)scanf("%d",&aa[i]);
	return 1;
}


int getfirstsum(int left,int right){
	if(left==right)return aa[left];
	return getfirstsum(left,(left+right)/2) +
			 getfirstsum((left+right)/2+1,right);
}

int main(void){
	while(1){
		if(getinput()==-1)break;
		
		int a = getfirstsum(0,k-1);
		int ans=a;
		rep(i,n-k){
			a = a-aa[i]+aa[i+k];
			if(ans<a){
				ans=a;
			}
		}
		
		printf("%d\n",ans);
	}
}