#include <iostream>
using namespace std;
int main(){
	int W , H , x , y , r;
	bool in=true;
	cin >> W >> H >> x >> y >> r;
	if((x+r)>W || (x-r)<0){
		in=false;
	} 
	if((y+r)>H || (y-r)<0){
		in=false;
	}
	if(in){
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}