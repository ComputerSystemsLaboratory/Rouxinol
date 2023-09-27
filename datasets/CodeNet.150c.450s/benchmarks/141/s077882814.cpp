#include<iostream>
using namespace std;
double cross(double x1, double y1, double x2, double y2){
	return (x1 * y2) - (y1 * x2);
}
int main(){
	double x[3], y[3], px, py;
	while(cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> px >> py){
		double ret[3];
		for(int i = 0; i < 3; ++i ){
			int n =( i+1 ) % 3;
			ret[i] = cross( px - x[i], py - y[i], x[n] - x[i], y[n] - y[i] );
		}
		if(ret[0] < 0 && ret[1] < 0 && ret[2] < 0 
		|| ret[0] > 0 && ret[1] > 0 && ret[2] > 0) 
			cout << "YES" << endl;
		else
		    cout << "NO" << endl;		
	}
}