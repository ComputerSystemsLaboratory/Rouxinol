#include <iostream>
using namespace std;

int main(){
	int x , y;
	while(cin >> x >> y , x || y ){
		x<=y ? cout << x << " " << y : cout << y << " " << x;
		cout << endl;
	}
	return 0;
}