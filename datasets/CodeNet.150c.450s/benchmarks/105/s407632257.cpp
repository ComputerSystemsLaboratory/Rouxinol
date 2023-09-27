#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007
#define int long long int
#define pii pair<int,int>
#define vpii vector<pii>
#define vi vector<int>
#define fi first
#define se second
#define psb push_back
#define ppb pop_back
#define fio ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define all(x) x.begin(),x.end()
#define endl "\n"

int ar[300];

int32_t main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>ar[i];
		string s;
		cin>>s;
		int ans=0;
		set<int,greater<int>> st;
		for(int i=n-1;i>=0;i--)
		{
			for(int e:st)
				ar[i]=min(ar[i],ar[i]^e);
			if(ar[i]==0)
				continue;
			if(s[i]=='0')
				st.insert(ar[i]);
			else
			{
				ans=1;
				break;
			}
		}
		cout<<ans<<endl;
	}
}
