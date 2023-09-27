#include <iostream>
using namespace std;

double kata(double x, double y, double xx, double yy)
{
	return (yy-y)/(xx-x);
}

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		double x1,y1,x2,y2,x3,y3,x4,y4;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		if(kata(x1,y1,x2,y2)==kata(x3,y3,x4,y4))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}