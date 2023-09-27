#include<bits/stdc++.h>
using namespace std;
#define deb(x)   cout<<"> "<<#x<<" : "<<x<<endl;
#define deb2(x,y)cout<<"> "<<#x<<"->"<<x<<"  "<<#y<<"->"<<y<<endl;
#define LINE   cout << "--- LINE NO : " << __LINE__ <<"  ---"<< endl;
#define pnr(a)   for(auto x:a){cout<<x<<" ";}cout<<endl;
#define pnr2(a)  for(auto x:a){cout<<x.first<<" "<<x.second<<endl;}

#define  vt            vector
#define  ff            first
#define  ss            second
#define  int           long long
#define  db            long double
#define  pii           pair<int,int>
#define  Maxpq(x)      priority_queue<x>
#define  Minpq(x)      priority_queue<x,vt<x>,greater<x>>

#define  pb            push_back
#define  si(x)         (int)x.size()
#define  all(x)        x.begin(),x.end()
#define  mem(a,x)      memset(a,x,sizeof(a))
#define  FOR(a)        for(auto& x :  a )
#define  forr(i,n)     for(int i=0;i<n;i++)

#define  pi            2*acos(0.0)
#define  inf           (int)1e18
#define  mxn           (int)2e5+5
#define  mod           (int)1e9+7

int mainx()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0 ; i < n ; i++)
		cin >> a[i];
	unordered_map< int , int > mp;
	forr(i , n)
	{
		mp[a[i]]++;
	}
	int sum = 0;
	forr(i , n)sum += a[i];
	int q;
	cin >> q;
	forr(_ , q)
	{
		int bi , ci;
		cin >> bi >> ci;

		sum -= (bi * mp[bi]);
		sum += (ci * mp[bi]);
		mp[ci] += mp[bi];
		mp[bi] = 0;
		cout << sum << endl;
	}
	return 0;
}


inline void __INCLUDE() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	//freopen("out.txt","w",stdout);
#endif
}

int32_t main() {



	ios::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

	//cout << fixed << setprecision(20);

	int tt = 1;
	//cin>>tt;
	for (int t = 1 ; t <= tt ; t++ )
	{
		// cout<<"Case #"<<t<<": ";
		mainx();
	}
	return 0 ;
}

