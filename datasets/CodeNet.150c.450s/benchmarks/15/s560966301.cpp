#include<cstdio>
#include<iostream>
int n,n1[10000],q,t[500],cnt=0;
void test(int a){
	for(int i=0;i<n;i++){
		if(n1[i]==a){
			cnt++;
			break;
		}
	}
}

int main(void)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&n1[i]);	// 333333333 345
	}
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		scanf("%d",&t[i]);
	}
	for(int i=0;i<q;i++){
		test(t[i]);
	}
	printf("%d\n",cnt);
	return 0;
}