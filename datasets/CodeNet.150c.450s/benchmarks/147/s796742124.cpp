#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int,int> pii;
#define mp make_pair
#define pb push_back
#define f first
#define s second


//var 
int n, ans[10005];

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0);

	cin >> n;
	for(int i = 1; i*i <=n; i++){
		for(int j = 1; j*j<=n; j++){
			for(int k = 1; k*k<=n; k++){
				int tmp = i*i + j*j + k*k + i*j + i*k + j*k;
				if(tmp <= n) ans[tmp]++;
			}	
		}
	}

	for(int i = 1; i<=n; i++)
		cout << ans[i] << endl;

	cout.flush();
	return 0;
}