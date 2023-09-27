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
    int N,A,B,C,X;
    while(cin >> N >> A >> B >> C >> X){
        if(N == 0 && A == 0 && B == 0 && C == 0 && X == 0)return 0;
        vector<int> vec;
        for(int a = 0;a < N;a++){
            int b;cin >> b;
            vec.push_back(b);
        }
        int ans = 0;
        int i = 0;
        while(1){
            if(vec.at(i) == X){
                i++;
            }
            X = (A*X+B)%C;
            if(ans >= 10001){
                cout<<-1<<endl;
                break;
            }
            if(i == N){
                cout<<ans<<endl;
                break;
            }
            ans++;

        }
    }
}

