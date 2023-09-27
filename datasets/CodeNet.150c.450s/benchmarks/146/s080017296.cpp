
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
    int n;
    cin >> n;
    for (int j=0; j<n; j++) {
        vector<xy> inp;
        double x,y,z,w;
        for (int i=0; i<2; i++) {
            cin >> x >> y >> z >> w;
            inp.push_back(xy(x-z,y-w));
        }
        double ans;
        ans =((conj(inp[0])*inp[1]).imag());
        bool b = abs(ans) < eps;
        cout << (b ? "YES" : "NO")<<endl;
    }
}