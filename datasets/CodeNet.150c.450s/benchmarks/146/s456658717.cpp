#include <iostream>

using namespace std;

int main() {
	double x1,x2,x3,x4;
	double y1,y2,y3,y4;
	double incAB, incCD;
	int count=0;
	cin>>count;
	for(int i=0; i<count; i++) {
		cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		incAB = (y2-y1) / (x2-x1);
		incCD = (y4-y3) / (x4-x3);
		if(incAB == incCD) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}