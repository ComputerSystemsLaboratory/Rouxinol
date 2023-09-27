#include <bits/stdc++.h>
using namespace std;
int uni[100000],n,m,r[100000];
int find(int a){
	if(a!=uni[a])a=find(uni[a]);
	return a;
}
bool same(int a,int b){
	return find(a)==find(b);
}
void unit(int a,int b){
	int c=find(a),d=find(b);
	if(r[c]>r[d])uni[c]=d;
	else{uni[d]=c;
		if(r[c]==r[d])r[d]++;
	}
}
int main() {
	cin>>n>>m;
	for(int i=0;i<n;i++){uni[i]=i;r[i]=0;}
	for(int i=0;i<m;i++){
		int a,b,c;
		cin>>c>>a>>b;
		if(c)cout<<(same(a,b)?1:0)<<endl;
		else unit(a,b);
	}
}