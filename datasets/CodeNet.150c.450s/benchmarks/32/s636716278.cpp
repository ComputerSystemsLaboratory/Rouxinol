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
    int n,a,b;
    while(cin >> n >> a >> b){
        if(n == 0 && a == 0 && b == 0)return 0;
        vector<int> vec;
        for(int q = 0;q < n;q++){
            int e;cin >> e;
            vec.push_back(e);
        }
        sort(vec.begin(), vec.end());
        int ma = -1e9;
        int ans = 0;
        for(int i = n-b-1;i < n-a;i++){
            if(vec.at(i+1) - vec.at(i) > ma){
                ma = vec.at(i+1) - vec.at(i);
                ans = n-i-1;
            }
        }
        cout<<ans<<endl;
    }
}

