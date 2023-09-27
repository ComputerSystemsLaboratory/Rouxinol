#include <cstdio>
#include <iostream>
#include <utility>
using namespace std;

int main(){
	long x, y;
	cin >> x >> y;
	
	if(x<y) swap(x,y);
	
	while(x%y!=0){
		int z=x%y;
		x=y;
		y=z;	
	}
	
	cout << y << endl;
}