#include <iostream>
#include <cmath>
using namespace std;

const double EPS= 1e-12;

struct zahyo{
	double x;
	double y;
};


int main(){
	zahyo a , b , c , d , ab , cd;
	int n;
	std::cin >> n;
	for(int i=0 ; i<n ; ++i){
		std::cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;
		ab.x=b.x-a.x;
		ab.y=b.y-a.y;
		cd.x=d.x-c.x;
		cd.y=d.y-c.y;
		if (abs(ab.x*cd.y-ab.y*cd.x)<EPS){ //gaiseki
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}			
	}
	return 0;
}