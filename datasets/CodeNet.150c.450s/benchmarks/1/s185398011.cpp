#include <iostream> 
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<deque>
#include<iomanip>
#include<sstream>
#include<cmath>
#include<bitset>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define req(i,n) for(int i = 1;i <=  n; i++)
#define rrep(i,n) for(int i = n -1;i >= 0;i--)
#define ALL(obj) begin(obj), end(obj)
#define RALL(obj) rbegin(obj),rend(obj)
typedef long long int ll;
typedef long double ld;
const ll INF = (1 << 30);
template<typename A, size_t N, typename T>
void Fill(A(&array)[N], const T& val) {
    fill((T*)array, (T*)(array + N), val);
}int a[100010],L[100010],n;
int LIS() {
    L[0] = a[0]; int le = 1;
    rep(i, n) {
        if (L[le - 1] < a[i]) L[le++] = a[i];
        else *lower_bound(L, L + le, a[i]) = a[i];
    }return le;
}
int main() {
    cin >> n;
    rep(i, n) cin >> a[i];
    cout << LIS() << endl;
}
