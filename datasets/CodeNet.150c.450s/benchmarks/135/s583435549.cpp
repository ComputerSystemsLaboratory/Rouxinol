#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<functional>
#include<queue>
#include<stack>
#include<set>
using namespace std;
const int INF=1111111111;
const int M=3000000;
int n,m,h[3000],w[3000],seg[8192],s,tn,ah[3000000],aw[3000000];
void init(int _n){
	s=1;
	while(s<_n)s*=2;
	for(int i=0;i<s*2-1;i++)seg[i]=0;
}
void upgrade(int k,int a){//k逡ェ逶ョ縺ョ蛟、繧誕縺ォ螟画峩
	k+=s-1;
	seg[k]=a;
	while(k>0){
	k=(k-1)/2;
	seg[k]=seg[k*2+1]+seg[k*2+2];
	}
}
//a?枌縺ョ蜷郁ィ亥?繧呈アゅａ繧?//
int sum(int a,int b,int k,int l,int r){
	if(r<=a||b<=l)return 0;
	if(a<=l&&r<=b){return seg[k];}
	else {
		int vl=sum(a,b,k*2+1,l,(l+r)/2);
		int vr=sum(a,b,k*2+2,(l+r)/2,r);
		return vl+vr;
	}
}
int main(){

	while(cin>>n>>m,n||m){
	tn=n;
	for(int i=0;i<n;i++)cin>>h[i];
	
	init(n);
	
	for(int i=0;i<n;i++){
	upgrade(i,h[i]);
	}

	for(int i=0;i<n;i++){
		for(int j=i+1;j<=n;j++){
			ah[sum(i,j,0,0,s)]++;
		}	}

	for(int i=0;i<m;i++)cin>>w[i];
	tn=m;
	init(m);
	for(int i=0;i<m;i++){upgrade(i,w[i]);}
	
	for(int i=0;i<m;i++){
		for(int j=i+1;j<=m;j++){
			aw[sum(i,j,0,0,s)]++;
		}
	}
	int ans=0;
	for(int i=1;i<3000000;i++){ans+=ah[i]*aw[i];}
	cout<<ans<<endl;
	fill(ah,ah+3000000,0);
	fill(aw,aw+3000000,0);
	}
	return 0;
}