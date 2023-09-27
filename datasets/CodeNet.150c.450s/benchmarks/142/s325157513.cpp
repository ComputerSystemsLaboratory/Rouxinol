#include <bits/stdc++.h>
using namespace std;
#define int long long
#define loop(x) for(int i = 0;i<(x);i++)
signed main(){
	int n,k; cin>>n>>k;vector<int>arr;
	loop(n){
			int a; cin>>a;arr.push_back(a);
		}
	for(int i = k; i<arr.size();i++){
		if(arr[i]>arr[i-k])cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}