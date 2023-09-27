#include <bits/stdc++.h>
#define REP(i,n) for(int i=0; i<(int)(n); ++i)

using namespace std;

typedef complex<double> Point;

const double EPS = 1e-10;

int sign(double x){
    if(x > EPS) return 1;
    if(x < -EPS) return -1;
    return 0;
}
struct Line : public vector<Point> {
    Line(const Point& a, const Point& b) {
        push_back(a); push_back(b);
    }
    Point vector() const {
        return back() - front();
    }
};

double cross(Point a, Point b){
    return imag(conj(a) * b);
}

bool paralell(Line l, Line m){
    return sign(cross(l.vector(), m.vector())) == 0;
}

int main(){
    int N;
    cin >> N;
    while(N--){
        Point p[4];
        REP(i, 4){
            double x, y;
            cin >> x >> y;
            p[i] = Point(x, y);
        }
        Line l1(p[0], p[1]);
        Line l2(p[2], p[3]);
        if(paralell(l1, l2)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}