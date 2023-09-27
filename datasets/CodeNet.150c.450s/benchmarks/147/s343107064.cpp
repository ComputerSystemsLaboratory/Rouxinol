#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
typedef vector<int> vec;
typedef unordered_map<int,int> hash;
#define long long long
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define fill(a,v) memset(a,v,sizeof(a))
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define INF 0x3f3f3f3f//infinity for integers
#define JJ ios_base::sync_with_stdio(0); cin.tie(0)//input fast
#define MOD 1000000007


int main()
{
	JJ;
	int n; cin>>n;
	int arr[10050]={0};
		// FOR(a,1,n+1){
		int ans=0;
		FOR(i,1,105){
			FOR(j,1,105){
				FOR(k,1,105){
					int num=i*i + j*j + k*k +(i*j+j*k+k*i);
					if(num<10050)
					// {
						arr[num]++;
						// dp[num]++;
						// break;
					// }
 
				}
			}
		}
		// cout<<ans<<endl;
		FOR(i,1,n+1){
			cout<<arr[i]<<endl;
		}
	// }
	


	return 0;
}
