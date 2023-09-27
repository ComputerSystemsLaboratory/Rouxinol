#include <bits/stdc++.h>
using namespace std;

int main(){

	  while(1){
			int m,nmin,nmax;
			cin >> m >> nmin >> nmax;
			if(!m) break;

			vector<int> p(m);
			for(int i=0; i<m; i++) cin >> p[i];

			int gap = 0,ans = 0;
			for(int i=nmin-1; i<nmax; i++){
				  if( gap <= p[i]-p[i+1] ) {
						gap = p[i] - p[i+1];
						ans = i;
				  }
			}
			cout << ans+1 << endl;
				  
			
			
			
	  }
}