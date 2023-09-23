#include<iostream>
using namespace std;
int main(){
	int x;
	int y;
	cin >> x >> y;
	if (x<y){
		cout << "a < b\n";
	}
	else if (x>y){
		cout << "a > b\n";
	}
	else{
		cout << "a == b\n";
	}
	return 0;
}