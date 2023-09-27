#include <iostream>
using namespace std;
struct point{
	double x;
	double y;
};

bool side(point p1, point p2, point p3){
	return (p3.y-p1.y)*(p2.x-p1.x)-(p3.x-p1.x)*(p2.y-p1.y)>0;
}

int main(void){
    point p1, p2, p3, p0;
	
	while (true){
		cin>>p1.x>>p1.y;
		if (cin.eof()) break;
		cin>>p2.x>>p2.y;
		cin>>p3.x>>p3.y;
		cin>>p0.x>>p0.y;

		if (side(p1, p2, p0) == side(p2, p3, p0) && side(p2, p3, p0) == side(p3, p1, p0))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
    return 0;
}