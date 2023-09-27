#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
const int INF=1e9;
int e,v,r;
int to[100000],from[100000],w[1000000],d[1000000];
bool relax(int e){
	if(d[to[e]]>d[from[e]]+w[e] && d[from[e]]!=INF){
		d[to[e]]=d[from[e]]+w[e];
		return 1;
	}
	return 0;
}
int main(){
	cin>>v>>e>>r;
	fill(d,d+v,INF);
	for(int i=0;i<e;i++){
		cin>>from[i]>>to[i]>>w[i];
	}
	d[r]=0;
	for(int i=0;i<v;i++){
		for(int j=0;j<e;j++){
			bool o=relax(j);
			if(i==v-1 && o==true){
				cout<<"NEGATIVE CYCLE"<<endl;
				return 0;
			}
		}
	}
	for(int i=0;i<v;i++){
		if(d[i]!=INF){
			cout<<d[i]<<endl;
		}
		else{
			cout<<"INF"<<endl;
		}
	}
}