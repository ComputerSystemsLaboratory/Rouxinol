#include <iostream>
using namespace std;

int main(){
	int m,max=0,cen=-1,min=-2;
	cin >> m;
	max=m;
	cen=-1;
	min=-2;
	for(int i=1;i<10;i++){
		cin >> m;
		if(max<m){
			min=cen;
			cen=max;
			max=m;
		}
		else if(cen<=m){
			min=cen;
			cen=m;
		}
		else if(min<=m) min=m;
	}
	cout << max << endl;
	cout << cen << endl;
	cout << min << endl;

		return 0;
}