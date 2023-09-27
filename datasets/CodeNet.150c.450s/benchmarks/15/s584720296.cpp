#include<cstdio>
using namespace std;

int linearSearch(int A[],int n,int key){
	int i=0;
	A[n] = key;//???????¨????
	while( A[i] != key ) i++;
	return i != n;
}

int main(){
	int n,q;
	int S[10000+1],T;
	int i,j,same=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&S[i]);
	}
	scanf("%d",&q);
	for(i=0;i<q;i++){
		scanf("%d",&T);
		if(linearSearch(S,n,T)) same++;
	}
	
	printf("%d\n",same);
	return 0;
}