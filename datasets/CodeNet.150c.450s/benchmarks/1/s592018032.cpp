#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <sstream>
#include <string>
#define repd(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repd(i,0,n)
#define all(x) (x).begin(),(x).end()
#define mod 1000000007
#define inf 2000000007
#define mp make_pair
#define pb push_back
typedef long long ll;
using namespace std;
template <typename T>
inline void output(T a, int p) {
    if(p) cout << fixed << setprecision(p)  << a << "\n";
    else cout << a << "\n";
}
// end of template

// Longest (Strictly) Increasing Sequence
class LIS{
public:
    vector<int> S, L;
    LIS(vector<int> S) : S(S) {}
    
    vector<int> calc(){
        int len = 1; // length of LIS
        L.push_back(S[0]);
        repd(i, 1, S.size()){
            if (L[len - 1] < S[i]) {
                L.push_back(S[i]);
                len++;
            }
            else{
                int l = -1, r = len - 1;
                while (r - l > 1) {
                    int mid = (r + l) / 2;
                    if (L[mid] >= S[i]) {
                        r = mid;
                    }
                    else{
                        l = mid;
                    }
                }
                if(L[r] > S[i]) L[r] = S[i];
            }
        }
        return L;
    }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    // source code
    
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];
    LIS lis(A);
    vector<int> L = lis.calc();
    
    output(L.size(), 0);
    
    
    return 0;
}