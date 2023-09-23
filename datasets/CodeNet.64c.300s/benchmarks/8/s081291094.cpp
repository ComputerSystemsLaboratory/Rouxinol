#include <iostream>
using namespace std;

int main(){
	int i , n, x;
	cin >> n;
	
	for(i = 1; i <= n; i++){
		x = i;
		if(x%3 == 0){
			cout << ' ' << i;
			continue;
		}
		if(x%10 == 3){
			cout << ' ' << i;
			continue;
		}
		for(x /= 10; x > 0; x /= 10){
			if(x%10 == 3){
				cout << ' ' << i;
				break;
			}
		}
	}
	cout << endl;
	return 0;
}