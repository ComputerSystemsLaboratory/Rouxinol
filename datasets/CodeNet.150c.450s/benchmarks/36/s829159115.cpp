#include <iostream>
using namespace std;

int main(){
	int d, t = 0;
	int ans[100] = {0};
	while(cin >> d){
		for(int i = d; i < 600; i = i+d){
			ans[t] = ans[t]+i*i*d;
		}
		t++;
	}
	for(int i = 0; i < t; i++){
		cout << ans[i] << endl;
	}
}