#include<iostream>
using namespace std;

int main(){

	int W, H, x, y, r;
	int a, b, i, j;
	cin >> W >> H >> x >> y >> r;
	a = x - r;
	b = y - r;
	i = x + r;
	j = y + r;
	if( 0<=a && 0<=b){
		if( i<=W && j<=H){
		cout << "Yes" << endl;
		}else{
		cout << "No" << endl;
		}
	}else{
		cout << "No" << endl;
	}

	return 0;
}