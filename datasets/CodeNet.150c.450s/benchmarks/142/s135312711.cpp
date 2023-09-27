#pragma GCC optimize("Ofast")
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<string.h>
#include<math.h>
#include<map>
#include<iomanip>
#include<queue>

const long long INFL = 1e17+7;
const long long INFI = 1e9+7;
const long long MOD = 1e9+7;
const double EPS = 1e-8;
const double PI=acos(-1);

using namespace std;


int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n,k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    
    for(int i=0;i<n-k;i++){
      if(a[i]<a[i+k])cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  
	return 0;
}
