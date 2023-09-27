#include <iostream>
#include <string>
using namespace std;

inline bool has3(int n){
	while(n != 0){
		if(n%10 == 3){
			return true;
		}
		n /= 10;
	}
	return false;
}

int main(){
	int n;
	cin >> n;
	for(int i = 3; i <= n; i++){
		if(i%3 == 0 || has3(i)){
			cout << " " << i;
		}
	}
	cout << endl;
	return 0;
}