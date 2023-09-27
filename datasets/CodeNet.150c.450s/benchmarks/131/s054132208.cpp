#include <bits/stdc++.h>

using namespace std;
using LL = long long;

const int MOD = 1e9+7;

class Edge{
public:
    LL from,to, value;
    Edge(int f,int t, int c){
        from = f;
        to = t;
        value = c;
    }
};

int main(){
    int a,L;
    while(cin >> a >> L){
        if(a == 0 && L == 0)return 0;
        map<int, int> mp;
        mp[a] = 0;
        for(int i = 1;;i++){
            string s = to_string(a);
            sort(s.begin(), s.end());
            int mi = stoi(s);
            reverse(s.begin(), s.end());
            int ma = stoi(s) * pow(10, L - s.size());
            if(mp.find(ma - mi) == mp.end()){
                mp[ma - mi] = i;
                a = ma - mi;
            }else{
                cout<<mp[ma - mi]<<" "<<ma - mi<<" "<<i - mp[ma - mi]<<endl;
                break;
            }
        }
    }
}

