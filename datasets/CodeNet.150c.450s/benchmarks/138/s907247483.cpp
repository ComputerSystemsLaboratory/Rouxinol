#include <iostream>
using namespace std;
int main(){
		int x,y,d;
		cin >> x >> y;
		if( y >= x) swap(x,y);
		while(y > 0){
				d = x % y;
				x = y;
				y = d;
		}
		cout << x << endl;
		return 0;
}