#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <cmath>
#include <utility>
#include <queue>
#include <stdio.h>
#include <string>
#include <map>
#include <stack>
#include <complex>
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1000000000007
const double eps = 1e-11;
using namespace std;
typedef long long int ll;
typedef complex<double> xy;

int main(){
    double x1,y1,x2,y2,x3,y3,px,py;
    while(cin >> x1 >>y1>>x2>>y2>>x3>>y3>>px>>py){
        xy aa=xy(x1-px,y1-py),bb=xy(x2-px,y2-py),cc=xy(x3-px,y3-py);
        double a,b,c;
        a =((conj(aa)*bb).imag());
        b =((conj(bb)*cc).imag());
        c =((conj(cc)*aa).imag());
        cout << (abs(a)+abs(b)+abs(c)==abs(a+b+c) ? "YES" : "NO")<<endl;
    }
}