#include <bits/stdc++.h>
const int INF = 1e9;
const int MOD = 1e9+7;
using LL = long long;
const LL LINF = 1e18;
const double EPS = 1e-10;
using namespace std;
class Edge{
public:
    int from,to,value;
    Edge(LL a,LL b,LL c){
        from = a;
        to = b;
        value = c;
    }
    Edge(LL a,LL b){
        from = a;
        to = b;
    }
};

int main(){
    int n;
    while(cin >> n){
        if(n == 0)return 0;
        bool now = false;
        bool l = false;
        bool r = false;
        int ans = 0;
        for(int i = 0;i < n;i++){
            string s;cin >>s;
            if(s == "lu"){
                l = true;
            }
            if(s == "ru"){
                r = true;
            }
            if(s == "ld"){
                l = false;


            }
            if(s == "rd"){
                r = false;
            }
            if(!r && !l && now){
                ans++;
                now = false;
            }
            if(r && l && !now){
                ans++;
                now = true;
            }
        }
        cout<<ans<<endl;
    }
}

