#include <iostream>
using namespace std;

int main() {
	int N, v, max_v = -1000000000, min_v;
	cin >> N >> min_v;
	for(int i=1; i<N; i++){
		cin >> v;
		max_v = max(max_v, v - min_v);
		min_v = min(min_v, v);
	}
	cout << max_v << endl;
}