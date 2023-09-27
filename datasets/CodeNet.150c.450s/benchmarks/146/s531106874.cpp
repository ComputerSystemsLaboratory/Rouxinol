#include <iostream>
#include <complex>
using namespace std;
#define EPS (pow(10, -10))
#define EQ(a,b) (abs((a)-(b)) < EPS)


typedef complex<double> P;

double cross(P a, P b) {
    return(a.real() * b.imag() - a.imag() * b.real());
}

int is_parallel(P a1, P a2, P b1, P b2) {
    return(EQ(cross(a1 - a2, b1 - b2), 0.0));
}

int main(void) {
    int n;
	double x1,x2,x3,x4,y1,y2,y3,y4;
    
    cin >> n;
    for(int r = 0; r < n; r++) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        P a(x1, y1), b(x2, y2), c(x3, y3), d(x4, y4);
        if(is_parallel(a, b, c, d)) cout << "YES" << endl;
        else                        cout << "NO" << endl;
    }
    return(0);
}