#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAXN 500000+2
int n,m;
long long g=0;
int jl[MAXN];
int t[MAXN];
void input(){
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>jl[i];
	}
}
void gb(int* A,int x,int y,int* T){
    if(y-x>1){
    	int m=(x+y)/2;
    	int p=x,q=m,i=x;
    	gb(A,x,m,T);
    	gb(A,m,y,T);
    	while(p<m||q<y){
    		if(q>=y||(p<m&&A[p]<=A[q])) T[i++]=A[p++];
    		else T[i++]=A[q++];
    		g++;
    	}
    	for(i=x;i<y;++i){
    	    A[i]=T[i];
	    }
    }
    return;
}
int main(){
	input();
	gb(jl,0,n,t);
	for(int i=0;i<n-1;++i){
		cout<<jl[i]<<" ";
	}
	cout<<jl[n-1]<<endl;
	cout<<g<<endl;
}