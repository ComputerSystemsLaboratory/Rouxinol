#include<bits/stdc++.h>
 
using namespace std;

#define int long long

int a[10010];

signed main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
//	int t;
//	cin >> t;
//	while(t--){
		int n;
		cin >> n;
		for(int i=1;i<=sqrt(n);i++){
			for(int j=1;j<=sqrt(n);j++){
				for(int k=1;k<=sqrt(n);k++){
					int num=i*i + j*j + k*k + i*j + j*k + i*k;
					if(num<=n){
						a[num]++;
					}
				}
			}
		}
		for(int i=1;i<=n;i++){
			cout << a[i] << endl;
		}
//	}
}
