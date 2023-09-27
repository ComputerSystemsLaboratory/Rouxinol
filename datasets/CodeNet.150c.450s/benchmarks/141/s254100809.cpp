#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cmath>
 
using namespace std;

int checkPoint(double x1, double y1, double x2, double y2, double x, double y){
    if(x1 - x2 == 0) { if(x1 - x == 0) return 0; if(x - x1 > 0) { return 1; } else return -1; }
    if((y - y1) - (y2 - y1) / (x2 - x1) * (x - x1) == 0) return 0;
    if((y - y1) - (y2 - y1) / (x2 - x1) * (x - x1) > 0) { return 1; } else return -1;
}

int main(){
    double x1, y1, x2, y2, x3, y3, xp, yp;
    bool f;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
        f = false;
        if(checkPoint(x1, y1, x2, y2, x3, y3) * checkPoint(x1, y1, x2, y2, xp, yp) == 1){
            if(checkPoint(x1, y1, x3, y3, x2, y2) * checkPoint(x1, y1, x3, y3, xp, yp) == 1){
                if(checkPoint(x2, y2, x3, y3, x1, y1) * checkPoint(x2, y2, x3, y3, xp, yp) == 1){ f = true; cout << "YES" << endl; }}}
        if(!f) cout << "NO" << endl;
    }
    return 0;
}