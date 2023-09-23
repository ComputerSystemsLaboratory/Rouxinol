#include <iostream>
using namespace std;

void call(int n){
	if(!(n%3)){
		cout << " " << n;
		return;
	}
	for(int i=n;i>0;i/=10){
		if(i%10==3){
			cout << " " << n;
			return;
		}
	}
	return;
}

int main() {
	int n;
	cin >> n;
	for(int i=3;i<=n;i++) call(i);
	cout << endl;
    return 0;
}