#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, m;
	while(cin >> n >> m, n+m){
		int ncard[n], mcard[m];
		int nsum = 0, msum = 0;
		for(int i = 0; i < n; ++i){
			cin >> ncard[i];
			nsum += ncard[i];
		}
		for(int i = 0; i < m; ++i){
			cin >> mcard[i];
			msum += mcard[i];	
		}
		
		sort(ncard, ncard + n); sort(mcard, mcard + m);
		
		int i = 0;
		int j = 0;
		bool flag = false;
		while(!flag && i < n){
			j = 0;
			while(!flag && j < m){
				if(nsum - ncard[i] + mcard[j] == 
							msum + ncard[i] - mcard[j]){
					flag = true;
				}
				if(!flag) ++j;
			}
			if(!flag) ++i;
		}
		if(flag) cout << ncard[i] << " " << mcard[j] << endl;
		else cout << "-1" << endl;
	}	
}