#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

vector<int> P;

int root(int v){ //根を返す
    if(P[v] == v) return v;
    else return root(P[v]);
}

bool is_same_set(int a, int b){ // 同じならtrue
    return root(a) == root(b);
}

void unite(int a, int b){ // aの根をbの根にくっつける
    P[root(a)] = root(b);
}

int main(){
    int n; cin >> n;
    P.resize(n); //　Pは作りかけの森を想定する
    for(int i = 0; i < n; i++){
        P[i] = i;
    }
    vector<tuple<int, int, int>> vec; //<コスト,始点, 終点>を格納する配列
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int a; cin >> a;
            if(a >= 0 && i < j){
                vec.push_back(make_tuple(a, i, j));
            }
        }
    }
    sort(vec.begin(), vec.end()); //コスト順にソート
    int ans = 0;
    for(auto v: vec){
        int cost = get<0>(v), str = get<1>(v), end = get<2>(v);
        if(is_same_set(str, end)) continue; //繋がっている
        //もし繋がっていなければ
        ans += cost; // コストを足す
        unite(str, end); //つなげてあげる
    }
    cout << ans << endl;
}
