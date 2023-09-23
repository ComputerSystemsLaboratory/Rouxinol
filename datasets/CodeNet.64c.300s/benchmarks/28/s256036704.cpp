#include<iostream>
using namespace std;

int main(){
	int W,H,x,y,r;
	
	cin >> W >> H >> x >> y >> r;
	if(x+r<=W && x-r>=0 && y-r>=0 && y+r<=H){
	cout << "Yes" << "\n";
	}else{
	cout << "No" << "\n";
	}
	
	return 0;
}