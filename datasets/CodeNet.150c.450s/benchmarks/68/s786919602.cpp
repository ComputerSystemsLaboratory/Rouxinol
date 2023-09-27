#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>

using namespace std;

int main(){
	int n;
	while(cin >> n && n!=0){
		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin >> v[i];
		}
		sort(v.begin(),v.end());
		int mi = 100000000;
		for(int i=0;i<n-1;i++){
			mi = min(mi,v[i+1]-v[i]);
		}
		cout << mi << endl;
	}
	return 0;
}