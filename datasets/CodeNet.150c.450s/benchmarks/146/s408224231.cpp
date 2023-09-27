
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <algorithm>
#include <string>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <vector>
#include <limits.h>
#include <math.h>
#define rep(i,n) for (int i = 0; (i) < (n); ++ (i))
using namespace std;

int main(void){
    int n;
    double x[4],y[4],a,b,c,d,det;
    cin >> n;
    rep(j,n) {

    
    //入力を多少簡略化
    for(int i=0;i<4;i++) {
        cin >> x[i] >> y[i];
    }
    //(x1,y1)(x2,y2)を結ぶax+by=p の係数
    a = y[0]-y[1];  b = x[1]-x[0];
    //(x3,y3)(x4,y4)を結ぶcx+dy=q の係数
    c = y[2]-y[3];  d = x[3]-x[2];
    //係数についての行列式
    det = a*d-c*b;
    if(fabs(det) < 0.0000000001) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
}
