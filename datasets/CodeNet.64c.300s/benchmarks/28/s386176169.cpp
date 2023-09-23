#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int W , H , x , y , r;
	bool ans=true;
	cin >> W >> H >> x >> y >> r;
	if ((x+r)<0 || (x+r)>W) {
		ans=false;
	} 
	if ((y+r)<0 || (y+r)>H) {
		ans=false;
	}
	if (x<0 || y<0) ans=false;
	cout << (ans ? "Yes"  : "No");
	cout << endl;
	return 0;
	
}