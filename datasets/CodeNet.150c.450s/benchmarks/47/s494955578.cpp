#include <iostream>
using namespace std;
int W, H, x, y, r, No, Yes;
int main() {
	
	cin>> W >> H >> x >> y >> r;
	if(x + r <= W && x - r >= 0 && y + r <= H && y - r >= 0){
		cout<< "Yes" <<endl;
	}else{
		cout<< "No" <<endl; 
	}
}

