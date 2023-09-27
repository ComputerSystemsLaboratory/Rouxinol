#include <bits/stdc++.h>
#define WHOLE(v) (v).begin(), (v).end()
#define REV_WHOLE(v) (v).rbegin(), (v).rend()
using i64 = int64_t;
using namespace std;
template<class F>auto recursive(F f){return[f](auto...a){return f(f,a...);};}
template<class T>using rev_priority_queue=priority_queue<T,vector<T>,greater<T>>;
template<class T>using vector2d=vector<vector<T>>;
struct fixprec{int p;fixprec(int p):p(p){}}; ostream&operator<<(ostream&o,fixprec f){return o<<fixed<<setprecision(f.p);}

/*!* [minmax_assign] *!*/
/*+* 最大値、最小値の代入 *+*/
template<class T>bool max_assign(T&x,const T y){if(x < y) { x = y; return true;} else return false;}
template<class T>bool min_assign(T&x,const T y){if(x > y) { x = y; return true;} else return false;}

bool append_basis(vector<i64> &basis, i64 x) {
    i64 y = x;
    for(i64 b : basis) {
        min_assign(y, b ^ y);
    }
    if(y == 0) return false;
    basis.push_back(y);
    return true;
}

bool is_element_of(const vector<i64> &basis, i64 x) {
    for (i64 b : basis) {
        min_assign(x, b ^ x);
    }
    return x == 0;
}

int main() {
    int T;
    cin >> T;
    for(int t = 0; t < T; t++) {
        int N;
        cin >> N;
        vector<i64> A(N);
        for(i64 &x : A) cin >> x;
        string S;
        cin >> S;
        vector<i64> basis;
        for(int i = N - 1; i >= 0; i--) {
            if(S[i] == '0') {
                append_basis(basis, A[i]);
            } else if(S[i] == '1') {
                if(!is_element_of(basis, A[i])) {
                    basis.clear();
                    break;
                }
            }
        }
        cout << (basis.empty() ? 1 : 0) << endl;
    }
    return 0;
}
