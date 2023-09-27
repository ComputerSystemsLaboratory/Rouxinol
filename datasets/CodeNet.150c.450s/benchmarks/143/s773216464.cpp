#if __has_include("debug.h")
    #include "debug.h"
#else  
#include <bits/stdc++.h>
using namespace std;
#define d(...) 2;
#endif

#define int long long int

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"      

#define all(c) (c).begin(),(c).end()
#define rall(c) (c).rbegin(),(c).rend()
#define ff first
#define ss second
#define eps 1e-10

#define gcd(a,b)            __gcd((a),(b))
#define lcm(a,b)            ((a*b)/gcd(a,b))

void solve();
const int N=1e6+10;
int f[N];

int32_t main()
{
    #ifdef DEBUG
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif 

    fast
    
    int t = 1;
	// cin>>t;
	
	while(t--)
	    solve();
	return 0;  
}

void solve()
{
	int i,j;

	int n,q;
	cin>>n;
	vector<int>a(n);

	int sum=0;



	for(i=0;i<n;i++)
	{
		cin>>a[i];
		f[a[i]]++;
		sum+=a[i];
	}

	cin>>q;

	while(q--)
	{
		cin>>i>>j;
		sum-=f[i]*i;
		d(sum);
		f[j]+=f[i];
		sum+=f[i]*j;
		f[i]=0;

		cout<<sum<<endl;
	}
	

}