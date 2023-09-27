#include <bits/stdc++.h>
using namespace std;


vector<int> Prime_Factorize(int n){
	  vector<int> ans;
	   for(int i=2; i*i<=n; i++){
			while(n%i == 0){
				  ans.push_back(i);
				  n /= i;
			}
	  }
	  if(n!=1) ans.push_back(n);
	  return ans;
}


int main(){
	  int n;  cin >> n;
	  cout << n << ":";
	  vector<int> ans = Prime_Factorize(n);
	  for(auto x : ans) cout << " " << x;
	  cout << endl;
}