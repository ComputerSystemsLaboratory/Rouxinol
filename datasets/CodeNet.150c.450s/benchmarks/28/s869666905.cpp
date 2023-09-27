#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int w[100100];

bool calc(int m){
	int cnt = 1, now = 0;
	for(int i = 0; i < n; i++){
		if(now + w[i] <= m){
			now += w[i];
		}else if(w[i] <= m){
			now = w[i];
			cnt++;
		}else{
			return false;
		}
	}
	return cnt <= k;
}

int main(){
    cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> w[i];
	}
	int l = 0, r = 1e9 + 1, m;
	while(r - l >= 1){
		m = (l + r) / 2;
		if(calc(m)) r = m;
		else l = m + 1;
	}
	cout << r << endl;
}