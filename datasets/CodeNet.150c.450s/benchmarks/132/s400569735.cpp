#include <bits/stdc++.h>

using namespace std;

int main(){
	while(true){
		int n,p; cin >> n >> p;
		if(n == 0)break;
		vector<int> a(n,0);
		int s = p;
		int cnt = 0;
		while(true){
			if(s == 0){
				s = a[cnt];
				a[cnt] = 0;
			}
			else{
				s--;
				a[cnt]++;
			}
			if(s == 0 && a[cnt] == p)break;
			cnt++;
			cnt = cnt % n;
		}
		cout << cnt << endl;
	}
	
	return 0;
}