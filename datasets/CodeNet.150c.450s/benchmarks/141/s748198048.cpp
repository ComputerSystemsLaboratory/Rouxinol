#include <iostream>
#include <complex>

using namespace std;

#define REPEAT(i,a,b)   for(int i=(a); i<(b); i++)
#define REP(i, n)       REPEAT(i, 0, n)
#define ALL(c)          (c).begin(), (c).end()

#define X real()
#define Y imag()
typedef double D;
typedef complex<double> P;
const double EPS = 1e-9;
const int INF = 1000000;
#define pr(n) do { cout << #n " = " << (n) << endl; } while(0)

int main(void){
    double x[3] ,y[3], xp, yp;
    while(cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> xp >> yp){
        P p[3];
        P target(xp,yp);
        for(int i=0; i<3; i++){
            p[i] = P(x[i],y[i]);
        }
        P a = p[1]-p[0];
        P b = p[2]-p[0];
        if(a.X*b.Y - a.Y*b.X < 0) swap(p[2],p[1]);
        bool ok = true;
        for(int i=0; i<3; i++){
            P pp = p[(i+1)%3] - p[i];
            P tar = target - p[i];
            tar/=pp;
            if(0 < tar.X && tar.X < 1 && tar.Y > 0){}
            else {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }            
}