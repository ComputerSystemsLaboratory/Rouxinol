#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> a(10), b, c;

void solve(vector<int> a){
	b.push_back(a[0]);
	c.push_back(0);
	for(int i = 1; i < 10; i++){
		if(a[i] - b[b.size() - 1] > 0 && a[i] - c[c.size() - 1] > 0){
			if(a[i] - b[b.size() - 1] < a[i] - c[c.size() - 1]){
				b.push_back(a[i]);
			}else{
				c.push_back(a[i]);
			}
		}else if(a[i] - b[b.size() - 1] > 0 && a[i] - c[c.size() - 1] < 0){
			b.push_back(a[i]);
		}else if(a[i] - b[b.size() - 1] < 0 && a[i] - c[c.size() - 1] > 0){
			c.push_back(a[i]);
		}else{
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}

int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 10; j++){
			cin >> a[j];
		}
		solve(a);
	}
}