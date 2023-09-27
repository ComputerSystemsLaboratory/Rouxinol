#include <bits/stdc++.h>
using namespace std;

int N;
// bit[1]からbit[N]までを使用
int bit[1000010];
// 区間の右端で番号づけ(左の子のみに番号づけ)
// bit[x]が管理する区間の長さは、xの最も下の立っているビット
// 例えば、bit[6]が管理する区間の長さは、6=0110の最も下の立っているビットより0010=2 よって 2
// 最も下の立っているビットを取り出すのは、x & -x でできる。


// 次の更新すべき区間は、番号に区間の長さを足すと求まる
// v[a] += w
void add(int a, int w){
    for(int x=a; x <= N; x += x & -x) bit[x] += w;
}

// 次に足すべき区間は、番号から区間の長さを引くと求まる
// v[1]+...+v[a]
int sum(int a){
    int ret = 0;
    for(int x=a; x>0; x -= x & -x) ret += bit[x];
    return ret;
}

int main() {
    int q;
    cin >> N >> q;
    for(int i=0; i<q; i++){
        int com, x, y;
        cin >> com >> x >> y;
        if(com==0){
            add(x,y);
        }
        else if(com==1){
            cout << sum(y)-sum(x-1) << endl;
        }
    }
}

