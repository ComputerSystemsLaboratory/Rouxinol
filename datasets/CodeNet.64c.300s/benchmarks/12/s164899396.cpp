#include <iostream>
using namespace std;

int main(){

	int x=0,y=0;
	cin >> x;
	y = x*x*x;

	if((x>=1)&&(x<=100)){
	cout << y << endl;
	}else{
	cout << "0" << endl;
	}
	return 0;
}