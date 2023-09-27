#include <bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a),end()
#define debug(x) cout << "debug " << x << endl;
using namespace std;

double dist(double x1, double y1, double x2, double y2){
    return sqrt( ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)) );
}

double triangleArea(double x, double y, double z){
    return (y * z * sin( acos( (y * y +  z * z - x * x) / (2 * y * z) ) )) / 2;
}

double inputXY(double x1, double y1, double x2, double y2, double x3, double y3){
    double x, y ,z;
    x = dist(x1, y1, x2, y2);
    y = dist(x2, y2, x3, y3);
    z = dist(x3, y3, x1, y1);
    return triangleArea(x, y, z);
}

int main(){
    double x1, y1, x2, y2, x3, y3, xp, yp;
    double allArea, area12, area23, area31;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
        allArea = inputXY(x1, y1, x2, y2, x3, y3);
        area12 = inputXY(xp, yp, x2, y2, x1, y1);
        area23 = inputXY(x2, y2, x3, y3, xp, yp);
        area31 = inputXY(x3, y3, x1, y1, xp, yp);

        if(abs(allArea - (area12 + area23 + area31)) < 0.000001) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}