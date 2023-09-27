#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	int n, q;
	cin >> n;
	cin >> q;
	
	string names[n];
	int times[n];
	queue <int> index;
	
	for(int i = 0; i < n; ++i){
		cin >> names[i];
		cin >> times[i];
		index.push(i);
	}
	
	int t = 0;
	while(index.empty() == false){
		int i = index.front();
		index.pop();
		if(times[i] <= q){
			t += times[i];
			cout << names[i] << " " << t << endl;
		}else{
			t += q;
			times[i] -= q;
			index.push(i);
		}
	}
	
	return 0;
}