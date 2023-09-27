#include <iostream>
#include <vector>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, m;
	cin >> n >> m;
	
	vector<int> vec(n + 1);
	for(int i = 1; i <= n; ++i){
		vec[i] = i;
	}
	
	for(int i = 0; i < m; ++i){
		int a, b;
		char c;
		cin >> a >> c >> b;
		swap(vec[a], vec[b]);
	}
	
	for(int i = 1; i <= n; ++i){
		cout << vec[i] << endl;
	}
	
	return 0;
}