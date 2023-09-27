#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	double x1,x2,x3,x4,y1,y2,y3,y4,a,b,c,d;
	for (n;n>0;n--) {
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 ;
	a=x2-x1; b=y2-y1; c=x4-x3; d=y4-y3;
	if (a==0 || c==0) if (a==0 && c==0) cout << "YES"; else cout << "NO";
	else if (b/a==d/c) cout << "YES"; else cout << "NO";
	cout << endl;
	}
	return 0;
	}