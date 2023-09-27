#include <bits/stdc++.h>
using namespace std;
typedef complex<double> xy_t;

xy_t P[4];

double cross_product(xy_t a, xy_t b){
    return (conj(a)*b).imag();
}

int main(){
    while(true){
        for(int i = 0; i < 4; i++){
            double x, y; cin >> x >> y;
            P[i] = xy_t(x, y);
        }
        if(!cin) break; //
        double a, b, c; //点Pを中心から三角形の各頂点に伸びるベクトルが作る小三角形の符号付き面積×2を格納
        a = cross_product(P[0]-P[3], P[1]-P[3]);
        b = cross_product(P[1]-P[3], P[2]-P[3]);
        c = cross_product(P[2]-P[3], P[0]-P[3]);

        cout << (((a>0 && b>0 && c>0) || (a<0 && b<0 && c<0))? "YES": "NO") << endl;
    }
}
