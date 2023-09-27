#include <bits/stdc++.h>
using namespace std;

double EPS=1e-10;
double add(double a, double b){
    if(abs(a+b)<EPS*(abs(a)+abs(b))) return 0;
    else return a+b;
}
typedef complex<double> Pt;
double det(Pt a, Pt b){ //外積
    return add(a.real()*b.imag(),-a.imag()*b.real());
}

int main(){
	int n;  cin >> n;
    for(int i=0; i<n; i++){
        vector<Pt> p(4);
        for(int j=0; j<4; j++){
            double x, y;
            cin >> x >> y;
            p[j]={x,y};
        }

        p[1] -= p[0];
        p[3] -= p[2];
        
        cout << (det(p[1],p[3])==0 ? "YES" : "NO") << endl;
    }
}
