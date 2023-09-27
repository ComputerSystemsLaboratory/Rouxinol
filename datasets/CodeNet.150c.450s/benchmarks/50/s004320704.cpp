#include <iostream>
using namespace std;

const int coin[] = {500, 100, 50, 10, 5, 1};

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	while(cin >> n && n != 0){
	
		int a = 1000 - n;
		int cnt = 0;
		for(int i = 0; i < 6; ++i){
			while(a >= coin[i]){
				a -= coin[i];
				++cnt;
			}
		}
		
		cout << cnt << endl;
	}

	return 0;
}