#include <iostream>
using namespace std;
 
int main(){
	int x, y;

	do{
		cin >> x >> y;
		if(x==0 && y== 0) break;
		if(x>=y) cout << y << " " << x << endl;
		if(y>x) cout << x << " " << y << endl;
	} while(1);

}