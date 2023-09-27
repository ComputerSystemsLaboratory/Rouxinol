#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define vi vector<int>
typedef long long int ll;

int main (void)
{
  //freopen("in.txt","r",stdin);
  //freopen("out.txt","w",stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while(t--){
  	//cout << "Case #" << c - t << ": ";
	int n,d = 61;
	cin >> n;
	vector<ll> base(d,0),a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	string s;
	cin >> s;
	bool flag = 0;
	for(int j = n - 1;j > -1;j--){
		if(s[j] - '0'){
			for(int i = 0;i < d;i++){
				if(a[j]&(1LL<<i)){
					if(!base[i]){
						flag = 1;
						break;
					}
					a[j] ^= base[i];
				}
			}
		}
		else{
			for(int i = 0;i < d;i++){
				if(a[j]&(1LL<<i)){
					if(!base[i]){
						base[i] = a[j];
						break;
					}
					a[j] ^= base[i];
				}
			}
		}
		if(flag) break;
	}
	cout << flag << "\n";	
  }
  return 0;
}
