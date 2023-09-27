#include<iostream>
#include<algorithm>

using namespace std;

struct P{
    P(double a, double b){
	x = a;
	y = b;
    }
    double x, y;
    double det(P a){
	return x * a.y - y * a.x;
    }
    P operator-(P a){
	return P(x - a.x, y - a.y);
    }
};

int main(){
    double x1, x2, x3, xp, y1, y2, y3, yp;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
	P a = P(x1, y1);
	P b = P(x2, y2);
	P c = P(x3, y3);
	P p = P(xp, yp);
	if(((a - p).det(b - a) <= 0) == ((b - p).det(c - b) <= 0) &&
	   ((b - p).det(c - b) <= 0) == ((c - p).det(a - c) <= 0)) {
	    cout << "YES" << endl;
	}
	else{
	    cout << "NO" << endl;
	}
				
    }
    return 0;
}