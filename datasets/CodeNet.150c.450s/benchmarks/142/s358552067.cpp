#include<bits/stdc++.h>
#define endl '\n'
#define int long long
 
using namespace std;
 
int32_t main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	int n,k;
	cin>>n>>k;
	vector<int> v(n+1);
	vector<string> ans;

	v[0]=1;
	for(int i=1;i<=n;i++)
		cin>>v[i];

	for(int i=1;i<=n;i++){
		if(i-1<k){
			continue;
		}
		else{
			if(v[i]>v[i-k])
				ans.push_back("Yes");
			else ans.push_back("No");
		}
	}	

	for(int i=0;(unsigned)i<ans.size();i++)
	{
	 	cout<<ans[i]<<endl;
	}
	
	return 0;
}
