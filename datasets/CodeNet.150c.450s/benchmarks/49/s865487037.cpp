#include <iostream>
#include <string>
#include <queue>
#include <numeric>
#include <algorithm>
using namespace std;

int main(){

	int n;
	while(cin >> n, n){
		int sum=0, s_max=0, s_min=10000;
		for(int i=0; i<n; i++){
			int s; cin >> s;
			sum += s;
			s_max = max(s_max, s);
			s_min = min(s_min, s);
		}
			cout << (sum - s_max - s_min)/(n-2) <<endl;
	}

	return 0;
}