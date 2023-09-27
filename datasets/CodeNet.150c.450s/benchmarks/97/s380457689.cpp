#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
	int N;	
	while(cin >> N) {
		if(N == 0) break;
		vector<int> x(N, 0);			
		vector<int> y(N, 0);			
			
		int n, d;	
		for(int i = 1; i < N; ++i) {
			cin >> n >> d;	
			x[i] = x[n] + dx[d];		
			y[i] = y[n] + dy[d];		
		}
			
		cout << *max_element(begin(x), end(x)) - *min_element(begin(x), end(x)) + 1 << " ";
		cout << *max_element(begin(y), end(y)) - *min_element(begin(y), end(y)) + 1 << endl;
	}
	return 0;
}