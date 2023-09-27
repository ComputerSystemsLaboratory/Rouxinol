#include <cmath>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <sstream>

using namespace std;

typedef struct{
    double x;
    double y;
}vec;

int main(){
    int n;
    vec p[4],e[2];
    cin >> n;
    while(n--){
        for(int i=0;i<4;i++)
            cin >> p[i].x >> p[i].y;
        e[0].x=p[1].x-p[0].x;
        e[0].y=p[1].y-p[0].y;
        e[1].x=p[3].x-p[2].x;
        e[1].y=p[3].y-p[2].y;
        if(fabs(e[0].x*e[1].y-e[0].y*e[1].x)<(1e-10)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}