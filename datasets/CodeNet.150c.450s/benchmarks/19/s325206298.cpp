#include <iostream>
using namespace std;

int main(){
	int x , y;
	while(1){
		cin >> x >> y;
		if(x==0 && y==0) break;
		cout << (x>y? y:x) << " " << (x>y? x : y) << endl;
	}
	return 0;
}