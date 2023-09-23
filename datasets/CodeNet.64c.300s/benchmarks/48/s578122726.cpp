#include <iostream>
using namespace std;

int list[1000000] = {};

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	while(cin >> n){
	
	if(list[n] != 0){
		cout << list[n] << endl;
		continue;
	}
		
	int cnt = 0;
	for(int i = 2; i <= n; ++i){
		bool check = true;
		for(int j = 2; i >= j * j; ++j){
			if(i % j == 0){
				check = false;
				break;
			}
		}
		if(check)
			cnt++;
		
		if(list[i] == 0){
			list[i] += list[i - 1] + check;
		}
	}
	
	cout << cnt << endl;
	
	}
	
	return 0;
}