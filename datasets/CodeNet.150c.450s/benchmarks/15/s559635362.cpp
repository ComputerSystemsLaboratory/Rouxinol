#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,q,ans=0;
	vector<int> S,T;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		S.push_back(x);
	}
	cin>>q;
	for(int i=0;i<q;i++){
		int x;
		cin>>x;
		T.push_back(x);
	}
	for(int i=0;i<q;i++){
		for(int j=0;j<n;j++){
			if(T[i]==S[j]){
				ans++;
				break;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

