#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	long n;
	cin >> n;
	for (long i = 0; i < n; i++){
		vector<long> edge(3);
		cin >> edge[0] >> edge[1] >> edge[2];
		sort(edge.begin(), edge.end());
		if (edge[0] * edge[0] + edge[1] * edge[1] == edge[2] * edge[2]){
			cout << "YES" << endl;
		} 
		else cout << "NO" << endl;
	}
	return 0;
}