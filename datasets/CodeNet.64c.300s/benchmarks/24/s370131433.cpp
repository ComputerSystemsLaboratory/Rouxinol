#include <stdio.h>

const int MAX_N=10000;
int a[MAX_N];
int b[MAX_N];
int n;
int A=0;int B=0;
void solve(){
	for(int i=0;i<n;i++){
		if(a[i]>b[i]){
			A+=a[i]+b[i];
		}
		else if(a[i]<b[i]){
			B+=a[i]+b[i];
		}
		else{
			A+=a[i];
			B+=a[i];
		}
	}
}
int main(){
 while(1){
	scanf("%d",&n);
	if(n==0){
		break;
	}
	for(int i=0;i<n;i++){
	scanf("%d%d",&a[i],&b[i]);
	}
	solve();
	printf("%d %d\n",A,B);
	A=0;
	B=0;
 }
   return 0;
}