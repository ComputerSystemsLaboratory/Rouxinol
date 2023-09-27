#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
//ranker
using namespace std;

#define REPS(i, a, n) for (int i = (a); i < (n); ++i)
#define REP(i, n) REPS(i, 0, n)
#define RREP(i, n) REPS(i, 1, n + 1)
#define DEPS(i, a, n) for (int i = (a); i >= n; --i)
#define DEP(i, n) DEPS(i, n, 0)

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using pii = pair<int, int>;
using pis = pair<int, string>;
using psi = pair<string, int>;
using D = double;


int main(){
    int n, ans;

    while(cin >> n){
        ans = 0;

        if(n <= 36){
            for(int a = 0; a <= 9; a++){
                for(int b = 0; b <= 9; b++){
                    for(int c = 0; c <= 9 ; c++){
                        for(int d = 0 ; d <= 9; d++){
                            if((a + b + c + d ) == n){
                                ans++;
                            }
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
}