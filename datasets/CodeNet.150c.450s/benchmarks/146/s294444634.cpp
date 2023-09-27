#include <bits/stdc++.h>
using namespace std;

typedef double Real;
typedef complex<Real> Point;
typedef pair<Point,Point> Line;

const Real EPS=1e-10;


inline Point vec(const Line& a){
    return a.second-a.first;
}

Real dot(Point a,Point b){
    return (conj(a)*b).real();
}

Real cross(Point a,Point b){
    return (conj(a)*b).imag();
}

inline int sgn(Real a,Real b=0){
    return a < b - EPS ? -1 : a > b + EPS ? 1 : 0;
}

inline bool near(Point a,Point b){
    return !sgn(abs(a-b));
}

inline bool is_orthogonal(Line la,Line lb){
    return !sgn(dot(vec(la),vec(lb)));
}

inline bool is_parallel(Line la,Line lb){
    return !sgn(cross(vec(la),vec(lb)));
}

inline bool is_intersected_line(Line la,Line lb){
    return !is_parallel(la,lb);
}

inline Real arg(const Point& base,const Point& a,const Point& b){
    return arg((b-base)/(a-base));
}

inline Real sr(Real a){
    return sqrt(max(a,(Real)0));
}

inline Real dist(Point a,Point b){
    return abs(a-b);
}

inline Real length(Point a){
    return abs(a);
}

inline Point unit_vector(Point a){
    return a / abs(a);
}


Point rotate(Point x,Real rad){
    return Point(x.real()*cos(rad)-x.imag()*sin(rad),x.real()*sin(rad)+x.imag()*cos(rad));
}                             



int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    Point A[4];

    cin>>n;
    for(int i=0;i<n;i++){
        for(auto &t:A){
            double x,y;
            cin>>x>>y;
            t=Point(x,y);
        }

        Line la=make_pair(A[0],A[1]),lb=make_pair(A[2],A[3]);

        cout << (is_parallel(la,lb) ? "YES" : "NO") << endl;
    }

    return 0;
}