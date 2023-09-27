#include <iostream>
#include <math.h>

using namespace std;

int main(void){
	int n, i;
	double x1, y1, x2, y2, x3, y3, x4, y4;
	double dega, degb;

	cin >> n;

	for(i=0;i<n;i++){
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

		dega = (y2 - y1) / (x2 - x1);
		degb = (y4 - y3) / (x4 - x3);
	
		if(dega == degb){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	return 0;
}