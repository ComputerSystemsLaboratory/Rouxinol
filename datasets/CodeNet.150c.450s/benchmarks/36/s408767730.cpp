#include <iostream>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int d;
	while(cin >> d){
	
	int sum = 0;
	for(int i = d; i < 600; i += d){
		sum += d * i * i;
	}
	
	cout << sum << endl;
	}
	
	return 0;
}