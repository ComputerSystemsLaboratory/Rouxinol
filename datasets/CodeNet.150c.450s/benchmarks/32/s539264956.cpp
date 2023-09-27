#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,nmax,nmin;
	while(cin >> m >> nmin >> nmax , m){
		int num[210];
		for(int i=0;i<m;i++){
			cin >> num[i];
		}
		sort(num,num+m,greater<int>() );
		int mgap=-1;
		int ans = 0;
		for(int i=nmax;i>=nmin;i--){
			if(num[i-1]-num[i] > mgap){
				mgap = num[i-1] - num[i];
				ans = i;
			}
		}
		cout << ans << endl;
	}
}