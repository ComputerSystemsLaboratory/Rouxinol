#include <bits/stdc++.h>
using namespace std;

struct union_find_tree1{
    vector<int> par;//0-indexed
    union_find_tree1(int sz){
        par.resize(sz); //サイズをszに変更
        for(int i=0;i<sz;++i) par[i] = i; //最初は自分が根
    }
    int find(int a){
        if(a==par[a]) return a;     //親が自分自身の時、自分が根である
        else return find(par[a]);   //そうでないなら自分に親を代入して辿る
    }
    void unite(int a,int b){
        int root_a = find(a),root_b = find(b);  //aの根,bの根を調べて代入。
        par[root_a] = root_b;       //根aの親をbにする
    }
    bool same(int a,int b){
        return find(a)==find(b);
    }
};

int main() {
    int n, q; cin >> n >> q;
    union_find_tree1 s(n);
    

    for (int i = 0; i < q; i++)
    {
        int com, x, y; cin >> com >> x >> y;
        if(com==0){
            s.unite(x, y);
        }else{
            if (s.same(x, y))
            {
                cout << 1 << endl;
            }else{
                cout << 0 << endl;
            }
            
        }
    }
    
}
//g++ -o d.exe d.cpp
