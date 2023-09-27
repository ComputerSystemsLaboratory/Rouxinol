#include <iostream>
using namespace std;
 
int main(){
	int a,b,c,x,y,n;
	n=0;
	cin >> a >> b >> c;
	for (x=a;x<=b;x++){
		y= c % x;
		if ( y == 0 ){
			n++;
		}
	}
	cout << n << "\n";
    return 0;
}