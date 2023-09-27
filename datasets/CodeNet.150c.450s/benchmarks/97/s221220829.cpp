#include <bits/stdc++.h>
using namespace std;

	typedef pair<int, int> P;
	P a[202];

	int main(){
		int N, n, d;
while(1){

		cin >> N;
		if(N == 0) break;
		//cin >> n >> d;
		a[0] = P(0, 0);
		
		for(int i=1; i<N; i++){
			int nx, ny;
			cin >> n >> d;
			nx = a[n].first;
			ny = a[n].second;
			
			if(d == 0) nx--;
			else if(d == 1) ny--;
			else if(d == 2) nx++;
			else if(d == 3) ny++;
			
			a[i] = P(nx, ny);
		}
		
		int xmi = 99999;
		int ymi = 99999;
		int xma = -99999;
		int yma = -99999;
		
		for(int i=0; i<N; i++){
			int x ,y;
			x = a[i].first;
			y = a[i].second;
			
			xmi = min(xmi, x);
			ymi = min(ymi, y);
			xma = max(xma, x);
			yma = max(yma, y);
		}
		if(N == 1) cout << 1 << " " << 1 << endl;
		else cout << abs(xmi - xma) + 1 << " " << abs(ymi - yma) + 1 << endl;
		
}//end	
}
