#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
using ll = long long ;
using P = pair<int,int> ;
using pll = pair<long long,long long>;
constexpr int INF = 1e9;
constexpr long long LINF = 1e17;
constexpr int MOD = 1000000007;
constexpr double PI = 3.14159265358979323846;

int main(){
    string s;
    cin >> s;
    vector<int> ppair(s.size(),-1);
    stack<int> st;
    rep(i,s.size()){
        if(s[i]=='_') continue;
        else if(s[i]=='\\'){
            st.push(i);
        }else{
            if(st.empty()) continue;
            else{
                ppair[i] = st.top();
                ppair[st.top()] = i;
                st.pop();
            }
        }
    }

    vector<ll> area;
    ll now_area = 0;
    ll AREA = 0;
    int bound = -1;
    rep(i,s.size()){
        if(ppair[i] == -1) continue;
        if(bound == -1){
            bound = ppair[i];
            now_area = ppair[i] - i;
        }else if(i < bound){
            if(i < ppair[i]) now_area += ppair[i] - i;
        }else if(i == bound){
            if(i < ppair[i]) now_area += ppair[i] - i;
            area.push_back(now_area);
            AREA += now_area;
            now_area = 0;
            bound = -1;
        }
    }

    cout << AREA << endl;
    cout << area.size() ;
    rep(i,area.size()) cout << " " <<  area[i];
    cout << endl;

    return 0;
}
