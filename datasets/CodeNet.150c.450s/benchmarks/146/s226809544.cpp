#include <iostream>
#include <cmath>

using namespace std;


int main(){
	
	int n;
	double x1,x2,x3,x4,y1,y2,y3,y4;
	
	cin>>n;
	for (int i=0; i<n; i++) {
		
		cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		
		if (abs(x2-x1)==0||abs(x4-x3)==0) {
			if (abs(x2-x1)==0 && abs(x4-x3)==0) {
				cout << "YES"<<endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
		else {
			if (abs((y2-y1)/(x2-x1)-(y4-y3)/(x4-x3))==0) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}

		}

		
	}
	
	return 0;
}
 