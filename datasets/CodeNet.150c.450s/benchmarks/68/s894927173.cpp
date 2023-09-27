#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
#include<set>
#include <math.h>
#include <string>
#define cinf(n,x) for(int i=0;i<(n);i++) cin >> x[i];
typedef long long int ll;
const ll INF =1LL << 62;
using namespace std;

int main(){
	while(1){
		int n; cin >>n;
		if(n==0)  break;
		vector<int> a(n);
		cinf(n,a);
		sort(a.begin(),a.end());
		int ans=1e9;
		for(int i=0;i<n-1;i++){
			ans=min(ans,a[i+1]-a[i]);
		}
		cout << ans << endl;
	}
}
