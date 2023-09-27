#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int m,nmin,nmax,x,res,resmax;
	vector<int> v;
	while(1){
		cin >> m >> nmin >> nmax;
		if(m == 0)break;
		resmax = 0;
		v.clear();
		for(int i = 0;i < m;i++){
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(),v.end(),greater<int>());
		for(int i = nmin - 1;i < nmax;i++){
			x = v[i] - v[i+1];
			if(x >= resmax){
				res = i + 1;
				resmax = x;
			}
		}
		cout << res << endl;
	}
	return 0;
}