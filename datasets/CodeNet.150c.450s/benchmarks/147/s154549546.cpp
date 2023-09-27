#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 2e5 + 10;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
int ans[N];
#define wzh(x) cerr<<#x<<' '<<x<<endl
int main() {
  ios::sync_with_stdio(false);
  // (x+y)^2 +(y+z)^2 + (x+z)^2 =n
  for(int x=1;x<=100;x++){
  	for(int y=1;y<=100;y++){
  		for(int z=1;z<=100;z++){
  			ans[x*x+y*y+z*z+x*y+x*z+z*y]++;
  		}
  	}
  }
  int n;cin>>n;
  for(int i=1;i<=n;i++){
  	cout<<ans[i]<<'\n';
  }
 	return 0;
}