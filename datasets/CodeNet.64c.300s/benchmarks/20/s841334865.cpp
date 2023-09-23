#include<iostream>

using namespace std;

int main(){

	int d;

	while (cin >> d){
		int ans = 0;
		int x = 600;
		while (x -= d){
			ans += (x*x*d);
		}
		cout << ans << endl;	
	}

	return 0;

}