	#include<iostream>
	#include<cstdio>
	#include<vector>
	using namespace std;
	const int MAX_N=100000+100;
	long long int INF=2e10;
	vector<int> w,from,to;
	long long d[MAX_N];
	bool ans=false;
	bool relax(int e){
		if(d[to[e]]>d[from[e]]+w[e] && d[from[e]]!=INF){
			d[to[e]]=d[from[e]]+w[e];
			return true;
		}
		return false;
	}
	int main(){
		int n,m,s,a,b,c;
		cin>>n>>m>>s;
		fill(d,d+n+10,INF);
		d[s]=0;
		for(int i=0;i<m;i++){
			cin>>a>>b>>c;
			from.push_back(a);
			to.push_back(b);
			w.push_back(c);
		}
		for(int i=0;i<n;i++){
			ans=false;
			for(int j=0;j<m;j++){
				if(relax(j)==true){
					ans=true;
				}
			}
		}
		if(ans==true){
			cout<<"NEGATIVE CYCLE"<<endl;
			return 0;
		}
		for(int i=0;i<n;i++){
			if(d[i]==INF){
				cout<<"INF"<<endl;
			}
			else
				cout<<d[i]<<endl;
		}
	}
	