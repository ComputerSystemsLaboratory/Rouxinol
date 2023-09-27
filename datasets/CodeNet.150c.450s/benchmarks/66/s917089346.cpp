#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(void){
	int N,M;
	string s;
	bool locked=true;
	map<string,bool> ID;

	cin>>N;
	rep(i,N){
		cin>>s;
		ID[s]=true;
	}

	cin>>M;
	rep(i,M){
		cin>>s;
		if(ID[s]){
			cout<<(locked ? "Opened" : "Closed")<<" by "<<s<<endl;
			locked = !locked;
		}else {
			cout<<"Unknown "<<s<<endl;
		}
	}

	return 0;
}