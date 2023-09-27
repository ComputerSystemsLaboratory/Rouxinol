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
    int N;cin >> N;
    map<string,bool> mp;
    for(int a = 0;a < N;a++){
        string s;cin >> s;
        mp[s] = 1;
    }
    int M;cin >> M;
    bool kagi = false;
    for(int i = 0;i < M;i++){
        string s;cin >> s;
        if(mp[s] != 1){
            cout<<"Unknown "<<s<<endl;
            continue;
        }
        if(!kagi){
            cout<<"Opened by "<<s<<endl;
            kagi = !kagi;
        }else{
            cout<<"Closed by "<<s<<endl;
            kagi = !kagi;
        }
    }
}

