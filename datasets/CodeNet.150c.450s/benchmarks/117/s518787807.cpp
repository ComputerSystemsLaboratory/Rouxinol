#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAXN 500000+2
int AA[MAXN],TT[MAXN];
int n,g=0;
void input(){
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>AA[i];
	}
}
void syf(int *A,int x,int y,int *T){
	if(y-x>1){
		int m=(x+y)/2;
		int i=x,p=x,q=m;
		syf(A,x,m,T);
		syf(A,m,y,T);
		while(p<m||q<y){
			if(q>=y||(p<m&&A[p]<=A[q])) T[i++]=A[p++];
			else T[i++]=A[q++];
			g++;
		}
		for(int i=x;i<y;++i){
			A[i]=T[i];
			AA[i]=T[i];
		}
	}
}
int main(){
	input();
	syf(AA,0,n,TT);
	for(int i=0;i<n-1;++i){
		cout<<AA[i]<<" ";
	}
	cout<<AA[n-1]<<endl;
	cout<<g<<endl;
	return 0;
}