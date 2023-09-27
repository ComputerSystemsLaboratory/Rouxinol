#include <iostream>

using namespace std;

int main()
{
	int n;
	double x[4], y[4], a, b;
	
	cin >> n;
	while(n--){
		for(int i = 0; i < 4; i++){
			cin >> x[i] >> y[i];
		}
		
		if(x[0]-x[1] == 0){
			if(x[2]-x[3] == 0){
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		} else {
			a = (y[0]-y[1])/(x[0]-x[1]);
			b = (y[2]-y[3])/(x[2]-x[3]);
			if(a == b){
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		}
	}
	
	return 0;
}