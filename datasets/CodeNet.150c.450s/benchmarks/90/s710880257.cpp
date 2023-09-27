#include<iostream>

using namespace std;

int main(){
	int ans[101] = {0}, i, n;
	int b = 0;
	while(cin >> n){
		ans[n] ++;
		if(ans[n] > b){
			b = ans[n];
		}
	}
	
	for(i = 1; i <= 100; i ++){
		if(b == ans[i]){
			cout << i << endl;
		}
	}

	return 0;
}