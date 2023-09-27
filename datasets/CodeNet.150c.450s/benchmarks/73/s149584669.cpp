#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
const int INF = 2000000000;
using namespace std;

const int MAX_N = 100005;
vector<pair<int, int>> v;

//[1, n]
int bit[MAX_N + 1] = {0}, n;

int sum(int i){
    int s = 0;
    while(i > 0){
        s += bit[i];
        i -= i & -i;
    }
    return s;
}

void add(int i, int x){
    while(i <= n){
        bit[i] += x;
        //bit[i] = max(bit[i], x);
        i += i & - i;
    }
}

int main(){
    int q;
    cin >> n >> q;

    rep(i,q){
        int com, x, y;
        cin >> com >> x >> y;
        if(com){
            cout << sum(y) - sum(x - 1) << endl;
        }else{
            add(x,y);
        }
    }
}