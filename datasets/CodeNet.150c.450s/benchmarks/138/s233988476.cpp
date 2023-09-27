#include <iostream>
using namespace std;
int main(){
	int x,y;
	cin >> x >> y;
	if( x<y ){
		swap(x,y);
	}
	while(1){
		if( y==0 )break;
		int tmp=x%y;
		x=y;
		y=tmp;
		//cout << x <<" "<<y << endl;
	}
	cout << x<<endl;
	return 0;
}