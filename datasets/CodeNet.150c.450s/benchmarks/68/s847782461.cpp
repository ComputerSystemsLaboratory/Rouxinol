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
        vector<int> vec;
        for(int i = 0;i < n;i++){
            int b;cin >> b;
            vec.push_back(b);
        }
        sort(vec.begin(), vec.end());
        int ans = 1e9;
        for(int i = 0;i < n-1;i++){
            ans = min(ans, vec.at(i+1)-vec.at(i));
        }
        cout<<ans<<endl;
    }
}

