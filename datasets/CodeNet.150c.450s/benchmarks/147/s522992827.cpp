#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
const long double PI=acos(-1);
typedef long long int ll;
typedef unsigned long long ull;
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define fo(i,n) for(int i=0;i<(int)n;i++)
#define fo1(i,n) for(int i=1;i<=(int)n;i++)
#define deb(x) cout<<#x<<"="<<x<<endl

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);int tc=1;
	vector<int> x;
	int c=0;
	fo1(i,100)
	{
		fo1(j,100)
		{
			fo1(k,100)
			{
				c=(i*i+j*j+k*k+i*j+i*k+j*k);
				if(c<=10000) x.push_back(c);
			}
		}
	}
	cin>>tc;
	fo1(t,tc)cout<<count(all(x),t)<<"\n";
	return 0;
}