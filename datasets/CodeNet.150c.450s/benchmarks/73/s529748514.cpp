#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
const int INF = 2000000000;
using namespace std;

const int sqrtN = 512;

class sqdiv{
    public:
        int N, K;
        vector<int> data;
        vector<int> bkt;
        sqdiv(int n){ //?????±???????????????????????´
            N = n;
            K = (N + sqrtN - 1) / sqrtN;
            data.assign(K * sqrtN, 0);
            bkt.assign(K, 0);
        }
        void add(int x, int y){
            int k = x / sqrtN;
            data[x] += y;
            int sum = 0;
            for(int i = k * sqrtN; i < (k + 1) * sqrtN; i++){
                sum += data[i];
            }
            bkt[k] = sum;
        }
        int getSum(int x, int y){
            int sum = 0;
            rep(k,K){
                int l = k * sqrtN, r = (k + 1) * sqrtN;
                if(r <= x || y <= l) continue;
                if(x <= l && r <= y){
                    sum += bkt[k];
                }else{
                    for(int i = max(x, l); i < min(y, r); i++){
                        sum += data[i];
                    }
                }
            }
            return sum;
        }
};

int main(){
    int n,q;
    cin >> n >> q;
    sqdiv ob(n);
    rep(i,q){
        bool com;
        int a, b;
        cin >> com >> a >> b;
        if(com){
            cout << ob.getSum(a,b + 1) << endl;
        }else{
            ob.add(a,b);
        }
    }
}