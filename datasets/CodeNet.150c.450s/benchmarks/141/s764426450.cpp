#include <bits/stdc++.h>
#define REP(i,n) for(int i=0; i<(int)(n); ++i)

using namespace std;

const double EPS = 1e-8;

typedef complex<double> Point;
typedef vector<Point> Polygon;

inline int sign(double x){
    return (x > EPS ? 1 : x < -EPS ? -1 : 0);
}

inline Point curr(const Polygon& a, int x){
    return a[x];
}
inline Point next(const Polygon& a, int x){
    return a[(x + 1) % a.size()];
}

double dot(Point a, Point b){
    return real(conj(a) * b);
}

double cross(Point a, Point b){
    return imag(conj(a) * b);
}

enum { OUT, ON, IN };
int contains(const Polygon& P, const Point& p){
    bool in = false;
    for(int i = 0; i < P.size(); i++){
        Point a = curr(P, i) - p;
        Point b = next(P, i) - p;
        if(a.imag() > b.imag()) swap(a, b);
        if(a.imag() <= 0 && 0 < b.imag() && cross(a, b) < 0){
            in = !in;
        }
        if(sign(cross(a, b)) == 0 && sign(dot(a, b)) <= 0) return ON;
    }
    return in ? IN : OUT;
}

int main(){
    double x1, y1, x2, y2, x3, y3, xp, yp;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
        Polygon t;
        t.push_back(Point(x1, y1));
        t.push_back(Point(x2, y2));
        t.push_back(Point(x3, y3));
        if(contains(t, Point(xp, yp)) == IN){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}