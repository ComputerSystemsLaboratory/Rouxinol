#include<bits/stdc++.h>
using namespace std;

int A[40], n;

int solve(int i, int m){
	int res;
	if(m == 0) return true;
	if(i > n)  return false;
	
	res = solve(i+1, m) || solve(i+1,m-A[i]);
	return res;
}

int main(){
	int ans, q, m;
	
	cin>>n;
	
	for(int i = 0; i < n; i++){
		cin>>A[i];
	}
	
	cin>>q;
	
	for(int i = 0; i < q; i++){
		cin>>m;
		if(solve(0, m)) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	
	return 0;
}
