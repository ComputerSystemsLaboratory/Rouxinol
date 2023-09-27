#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<climits>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<numeric>
#include<map>
#include<set>
#include<bitset>

#define REP(i,m,n) for(int i = m; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define ALL(a)  (a).begin(),(a).end()
template<class T> void chmax(T& a, T b) { if (a < b) { a = b; } }
template<class T> void chmin(T& a, T b) { if (a > b) { a = b; } }
using namespace std;

int main(void){
    string w;
    cin >> w;
    transform(w.begin(), w.end(), w.begin(), ::toupper);
    
    string s;
    cin >> s;
    
    int count = 0;
    while(s != "END_OF_TEXT"){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        if(s == w){
            count++;
        }
        cin >> s;
    }
    cout << count << endl;
}
