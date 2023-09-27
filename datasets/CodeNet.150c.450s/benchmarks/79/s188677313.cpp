#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdio>
#include<string>
#include<cmath>
typedef long long int ll;
#define rep(i,a) for(int i=0;i<(a);i++)
#define all(i) i.begin(),i.end()

using namespace std;
	
vector<int> doCut(int p,int c,vector<int> x,int n){
	vector<int> ret;
	for(int i=p-1;i<=p-1+c-1;i++){
		ret.push_back(x[i]);
	}
	rep(i,p-1){
		ret.push_back(x[i]);
	}
	for(int i=p+c-1;i<=n-1;i++){
		ret.push_back(x[i]);
	}
	return ret;
}

int main(){
	int n,r;
	while(1){
		vector<int> x;
		cin>>n>>r;

		for(int i=n-1;i>=0;i--){
			x.push_back(i+1);
		}
		if(n==0 && r==0)break;

		rep(i,r){
			int p,c;
			cin>>p>>c;
			x=doCut(p,c,x,n);

		}
		cout<<x[0]<<endl;
	}
	return 0;
}