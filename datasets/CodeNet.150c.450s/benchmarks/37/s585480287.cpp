#include <iostream>
#include <iomanip>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

int main() {
    int a[3];
    int b[3];
    int y[3];
    int x[3];
    while(true) {
    REP(i,3)
        cin >> a[i];
    REP(i,3)
        cin >> b[i];
    if(!cin)
        return 0;
    double o[2];
        o[0] = b[1]*a[2] - a[1]*b[2];
        o[1] = -b[0]*a[2] + a[0]*b[2];
    REP(i,2)
        o[i] = (o[i]==0)?0:o[i]/(a[0]*b[1]-b[0]*a[1]);
    cout << fixed << setprecision(3) << o[0] << ' ';
    cout << fixed << setprecision(3) << o[1] << '\n';
    }
}