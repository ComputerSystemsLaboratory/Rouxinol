#include<bits/stdc++.h>
using namespace std;

int main(){
	int m, min, max, a[300], ans;
		
	while (1){
		int t = 0;
		cin>>m>>min>>max;
		if(m == 0 && min == 0 && max == 0){
			break;
		}
		for(int i = 1; i <= m; i++){
			cin>>a[i];
		}

		for(int i = min; i <= max; i++){
			if(a[i] - a[i + 1] >= t){
				t = a[i ] - a[i + 1];
				ans = i;
			}
		}
		cout<<ans<<endl;
		
	}
	return 0;
}


