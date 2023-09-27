#include<stdio.h>
int n,k;
int a[100000];
int r,l;
int m,t;
int i,j;

int max(int a,int b){
	if(a>=b)return a;
	else return b;
}

int main(){
	while(1){
		scanf("%d %d",&n,&k);
		if(n==0&&k==0)return 0;
		for(i=0;i<n;i++)scanf("%d",&a[i]);
		r=0;l=k-1;
		m=0;
		for(i=0;i<k;i++){
			m+=a[i];
			t=m;
		}
		while(l<n-1){	
			t+=a[++l];
			t-=a[r++];
			m=max(m,t);
		}
		printf("%d\n",m);
	}
}
		