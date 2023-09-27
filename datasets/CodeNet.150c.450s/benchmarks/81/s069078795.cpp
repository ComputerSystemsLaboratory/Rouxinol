#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<vector>
#include<bits//stdc++.h>
#include<functional>
using namespace std;
struct P{
	long long cost,pos;
};
struct B{
	long long cost,to;
};
bool operator<(P a,P b){
	return a.cost<b.cost;
}
bool operator>(P a,P b){
	return a.cost>b.cost;
}
vector<B>e[10];
int main() {
	int n;
	while(cin>>n&&n!=0){
		for(int i=0;i<10;i++) e[i].clear();
		long long a,b,c,ma=0;
		for(int i=0;i<n;i++){
			cin>>a>>b>>c;
			e[a].push_back(B{c,b});
			e[b].push_back(B{c,a});
			ma=max(a,max(b,ma));
		}
		P sum;
		sum.cost=1000000;
		for(int i=0;i<=ma;i++){
			priority_queue<P, vector<P>, greater<P>>p;
			long long b[10];
			for(int j=0;j<10;j++) b[j]=1000000;
			b[i]=0;
			p.push(P{0,i});
			while(!p.empty()){
				P t=p.top();p.pop();
				for(int j=0;j<(int)e[t.pos].size();j++){
					if(b[t.pos]+e[t.pos][j].cost<b[e[t.pos][j].to]){
						b[e[t.pos][j].to]=b[t.pos]+e[t.pos][j].cost;
						p.push(P{b[e[t.pos][j].to],e[t.pos][j].to});
					}
				}
			}
			long long sum2=0;
			for(int j=0;j<=ma;j++){
				sum2+=b[j];
			}
			if(sum.cost>sum2){
				sum.cost=sum2;
				sum.pos=i;
			}
		}
		cout<<sum.pos<<" "<<sum.cost<<endl;
	}
}