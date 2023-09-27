#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <complex>
#define rep(i,b,n) for(int i=b;i<n;i++)
#define Rrep(i,b,n) for(int i=n-1;i>=b;i--)
#define CLR(mat) memset(mat, 0, sizeof(mat))
#define NCLR(mat) memset(mat, -1, sizeof(mat))
#define EPS (1e-10)
#define EQ(a,b) (abs((a)-(b)) < EPS)
using namespace std;
typedef complex<double> point;
typedef pair<int, int> paii;
typedef long long ll;
double cross(point va, point vb){
    return real(va) * imag(vb) - imag(va) * real(vb);
}
int is_parallel(point a1, point a2, point b1, point b2) {
  return EQ( cross(a1-a2, b1-b2), 0.0 );
}
int main(){
    int n;
    cin >> n;
    rep(i, 0, n){
        double x, y;
        point pt[4];
        rep(j, 0, 4){
            cin >> x >> y;
            pt[j] = point(x, y);
        }
        if( is_parallel(pt[0], pt[1], pt[2], pt[3]) )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}