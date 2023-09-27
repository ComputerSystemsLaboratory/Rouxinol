#include<bits/stdc++.h>
#define int long long
using namespace std ; 

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; 
	
	int n  ;
	cin >> n ;
	map<int,int> mp ;
	int sum = 0 ; 
	for(int i = 0 ;i < n ; ++i)
	{
		int a ; 
		cin >> a ;
		mp[a]++ ;
		sum += a; 
	} 
	int q ; 
	cin >> q ;
	for(int i = 0 ; i < q ;++i) 
	{
		int b ,c ; 
		cin >> b >> c ; 
		sum -= b*mp[b] ; 
		sum += c*mp[b] ; 
		cout << sum << '\n' ; 
		mp[c] += mp[b] ; 
		mp.erase(b) ; 
	}



}