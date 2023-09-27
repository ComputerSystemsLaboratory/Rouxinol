#include <iostream>
#include <complex>
#include <vector>
#include <algorithm>
using namespace std;

const double EPS = 1e-10;
const double INF = 1e12;
#define X real()
#define Y imag()

typedef complex<double> P;
typedef vector<P> VP;
double dot(P a, P b){
    return (conj(a)*b).X;
}
double cross(P a, P b){
    return (conj(a)*b).Y;
}
int ccw(P a, P b, P c){
    b -= a;
    c -= a;
    if(cross(b,c) > EPS) return +1; //ccw
    if(cross(b,c) <-EPS) return -1; //cw
    if(dot(b,c) < EPS) return +2; //c-a-b
    if(norm(b) < norm(c)) return -2; //a-b-c
    return 0; //a-c-b
}

int main(){
    double x[4],y[4];
    while(cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>x[3]>>y[3]){
        VP v(4);
        for(int i=0; i<4; i++) v[i] = P(x[i],y[i]);
        if(ccw(v[0], v[1], v[2]) == -1) swap(v[1],v[2]);
        bool flag=true;
        for(int i=0; i<3; i++){
            if(ccw(v[i], v[(i+1)%3], v[3]) == -1){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}