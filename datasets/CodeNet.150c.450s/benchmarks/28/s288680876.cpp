#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAXN 131072
int jl[MAXN];
int n,m;
long long P,hh;
void input(){
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>jl[i];
		hh+=jl[i];
	}
}
bool pd(int x){
	long long sum0=0;
	int v=1;
	for(int i=0;i<n;++i){
		if(sum0+jl[i]<=x) sum0+=jl[i];
		else if(jl[i]<=x){
			sum0=jl[i];
			v++;
		}
		else return false;
	}
	if(v>m) return false;
	else return true;
}
void syf(){
	long long l=0,r=hh;
	while(l<r){
	    long long mid=(r+l)/2;
	    if(pd(mid)) r=mid;
	    else l=mid+1;
	}
	cout<<l<<endl;
}
int main(){
	input();
	syf();
	return 0;
}