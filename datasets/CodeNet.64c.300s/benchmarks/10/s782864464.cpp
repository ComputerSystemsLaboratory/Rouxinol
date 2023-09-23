#include <iostream>
using namespace std;

int main(){
	int x, y, tmp;
	cin>>x>>y;
	while(x || y){
		if(x>y){
			tmp=x;
			x=y;
			y=tmp;
		}
		cout << x << ' ' << y << endl;
		cin>>x>>y;
	}
	return 0;
}