#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
int x;
vector<int>vec;
int main(){
	while(1){
		int n; cin>>n>>x; if(n+x==0) return 0;
		vec.clear();
		map<int,int>M;
		M[n] = 0;
		for(int i=0;i<x;i++){
			vec.pb(n%10); n/=10;
		}
		sort(vec.begin(),vec.end());
		for(int i=1;;i++){
			int mx =0 , mn = 0;
			for(int i=0;i<vec.size();i++) mx = mx*10+vec[i];
			for(int i=0;i<vec.size();i++) mn = mn*10+vec[vec.size()-1-i];
			int v = mn-mx; //cout << v << endl;
			if(M.find(v) != M.end()){
				cout << M[v] << " " << v << " " << i-M[v] << endl;
				break;
			}
			else {
				M[v] = i;
				vec.clear();
				rep(i,x) {vec.pb(v%10);v/=10;}
				sort(vec.begin(),vec.end());
			}
		}
		
	}
}

