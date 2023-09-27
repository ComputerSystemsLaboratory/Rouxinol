#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> ans;
int main(){
	while(1){
		int m,nmin,nmax;
		cin >> m >> nmin >> nmax;
		if(m + nmin + nmax == 0) break;
		int n;
		int p[200];
		for(int i = 0;i<m;i++){
			cin >> p[i];
		}
		sort(p,p+m);
		reverse(p,p+m);
		int maxg = 0;
		for(int i = nmin;i <= nmax;i++){
			int gap;
			gap = p[i-1] - p[i];
			if(gap >= maxg){
				maxg = gap;
				n = i;
			}
		}
		ans.push_back(n);
	}
	for(int i = 0;i < ans.size();i++) cout << ans[i] << endl;
	return 0;
}