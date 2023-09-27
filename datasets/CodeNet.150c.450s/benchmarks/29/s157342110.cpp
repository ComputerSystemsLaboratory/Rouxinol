#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,s,e) for (int i=s;i<(e);i++)
#define ALL(v) (v).begin(),(v).end()
#define MP(a,b) make_pair(a,b)
using namespace std;
typedef long long llint;
typedef pair<int, int> P;
const int MOD = (int)1e9 + 7;
const int INF = 999999999;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    list<int> l;
    int N;
    cin >> N;
    REP(i, N){
        string s;
        int x;
        cin >> s;
        if(s == "insert"){
            cin >> x;
            l.push_front(x);
        }else if(s == "delete"){
            cin >> x;
            for(auto itr = l.begin(); itr != l.end(); ++itr){
                if(*itr == x){
                    l.erase(itr);
                    break;
                }
            }
        }else if(s == "deleteFirst"){
            l.pop_front();
        }else{
            l.pop_back();
        }
    }
    for(auto itr = l.begin(); itr != l.end();){
        cout << *itr;
        ++itr;
        cout << (itr != l.end() ? " " : "\n");
    }

    return 0;
}