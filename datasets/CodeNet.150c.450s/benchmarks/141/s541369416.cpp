#include <iostream>
using namespace std;
const int INF = 1<<29;

int main(){
	double X[3], Y[3];
	double px, py;
	while( cin >> X[0] >> Y[0] >> X[1] >> Y[1] >> X[2] >> Y[2] >> px >> py ){
		int cnt = 0;
		for( int i=0; i<3; i++ ){
			if( (X[(i+1)%3]-X[i])*(py-Y[i]) - (px-X[i])*(Y[(i+1)%3]-Y[i]) > 0 ) cnt++;
		}
		if( cnt%3 ) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
}