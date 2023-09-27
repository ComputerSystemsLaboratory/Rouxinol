#include <bits/stdc++.h>
using namespace std;

#define MAX 100000
#define INF 1e+9


int lcs(vector<int>& a){
	  vector<int> L(MAX,INF);
	  for(int i=0; i<a.size(); i++){
			*lower_bound(L.begin(),L.end(),a[i]) = a[i];
	  }
	  return lower_bound(L.begin(),L.end(),INF) - L.begin();
}


int main(){

	  int n; cin >> n;
	  vector<int> a(n);
	  for(int i=0; i<n; i++)
			cin >> a[i];
	  cout << lcs(a) << endl;
}