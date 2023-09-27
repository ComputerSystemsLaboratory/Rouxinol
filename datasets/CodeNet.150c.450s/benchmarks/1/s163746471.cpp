#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

const int  MOD=1000000007;
const int  INF= int(1e9);
const int  MAX=100007;
int dp[MAX],a[MAX],n;

int main()
{
	ios_base::sync_with_stdio(false);
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    vi lis;
    lis.push_back(a[0]);
    for(int i=1;i<n;i++) {
        if(a[i] > *(lis.rbegin())) {
            lis.push_back(a[i]);
        } else {
            auto it= lower_bound(lis.begin(),lis.end(),a[i]) ;
            *it=a[i];
        }
    }
    cout<<lis.size()<<"\n";
	return 0;

}