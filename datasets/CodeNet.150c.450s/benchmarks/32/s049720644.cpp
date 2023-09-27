#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
vector<int>score(201);
int main() {
	int m, nmin, nmax;
	
	while (cin >> m >> nmin >> nmax, !(m == 0 && nmin == 0 && nmax == 0)) {
		
		for (int i = 0; i < m; i++) {
			cin >> score[i];
		}
		int ans=0;
		int s = 0;
		for (int i = nmin-1; i <= nmax-1; i++) {
			
			if (s <= score[i ] - score[i+1]) {
				ans = max(ans,i+1);
				s = max(s, score[i ] - score[i+1]);
				
			}
		}
		cout << ans << endl;
	}
	return 0;
}
