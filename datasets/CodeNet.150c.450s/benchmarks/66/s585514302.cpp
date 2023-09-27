#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <numeric>
#include <array>
#include <cmath>
#include <memory>
#include <set>
using namespace std;
//変数デバッグ
#define DEB(variable) cout << #variable << '=' << variable << endl

//for簡易表記(引数ミス防止)
#define FOR(LoopVariable,numberOFbegin,numberOFend) for (long long int LoopVariable = (numberOFbegin); (LoopVariable) < (numberOFend); (LoopVariable)++)
#define DEFOR(LoopVariable,numberOFbegin,numberOFend) for (long long int LoopVariable = (numberOFbegin)-1; (LoopVariable) >= (numberOFend); (LoopVariable)--)
#define REP(LoopVariable,numberOFend) for(long long int LoopVariable = 0;(LoopVariable)<(numberOFend);LoopVariable++)

constexpr long long int linf = numeric_limits<long long int>::max()-5;
constexpr int inf= numeric_limits<int>::max()-5;
constexpr long long int mod = 1000000007;

int main(){

    int n;

    cin >> n;
    string s;
    set<string> st;
    REP(i,n){
        cin >> s;
        st.insert(s);

    }
    cin >> n;
    bool is_open = false;
    REP(i,n){
        cin >> s;
        auto it = st.find(s);
        if(it!=st.end()){
            if(!is_open){
                cout << "Opened by " << s << endl;
            }else{
                cout << "Closed by " << s << endl;
            }
            is_open = !is_open;
        }else{
            cout << "Unknown " << s << endl;
        }
    }
    return 0;
}

