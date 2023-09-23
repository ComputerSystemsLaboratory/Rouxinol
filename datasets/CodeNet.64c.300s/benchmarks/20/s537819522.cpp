#include <iostream>

using namespace std;

int main(void){
	int d;
	int steps;
	int i;
	int ans=0;

	while(cin >> d){
		steps = 600 / d;
		ans = 0;
		for(i=0;i<steps;i++){
			ans += d * i * d * i * d;
		}
		cout << ans << endl;
	}

	return 0;
}