#include<iostream>
using namespace std;

int main(){

	int x, cnt;
	int coin[6] = {500, 100, 50, 10, 5, 1};
	
	while(cin >> x){
		cnt = 0;
		
		if(x == 0) break;
		
		x = 1000 - x;
		for(int i=0; i<6; i++){
			cnt += x / coin[i];
			x -= x / coin[i] * coin[i];
		}
	
		cout << cnt << endl;
	}

	return 0;

}