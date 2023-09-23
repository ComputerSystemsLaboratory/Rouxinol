#include <iostream>
using namespace std;

int gcd(int x, int y){
	if(x==1||y==1) return 1;
	if(x == y) return x;
	else if(x>y){
		if(x%y == 0) return y;
		else return gcd(y, x%y);
	} 
	else {
		if(y%x == 0) return x;
		else return gcd(x, y%x);
		}
}

int main(){
	int x,y;
	cin>>x>>y;
	cout<<gcd(x,y)<<endl;
	return 0;
}