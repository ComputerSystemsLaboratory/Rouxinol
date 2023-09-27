#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <queue>
using namespace std;
typedef long long int ll;
const int INF = 100000000;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
int main(){
    for(double a1, a2, b1, b2, c1, c2;cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;){
        double x, y;
        bool swp = false;
        b2 -= b1 * (a2 / a1);
        c2 -= c1 * (a2 / a1);
        y = c2 / b2;
        x = (c1 - y * b1) / a1;
        printf("%.3f %.3f\n", x, y);
    }
    return 0;   
}