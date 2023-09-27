#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int ll;

int main(){
	while(1){
		int n,a,b,c,d; cin >>n>>a>>b>>c>>d;
		if(n==0&&a==0&&b==0&&c==0&&d==0)break;
		vector<int> y(n);
		for(int i=0;i<n;i++){
			cin >> y[i];
		}
		int ans=0;
		for(int i=0;i<n;i++){
			if(d==y[i]){}
			else{
				while(d!=y[i]){
					ans++;
					d=(a*d+b)%c;
					if(ans>10001)break;
				}
			}
			if(ans>10001)break;
			ans++;
			d=(a*d+b)%c;
		}
		if(ans-1>10000) cout << -1 << endl;
		else cout << ans-1 << endl;
	}
}
