#include<bits/stdc++.h>
using namespace std;

	
struct union_find2_2{//経路圧縮で高速化
	
    vector<int> par;//parは添字の親（または自分が根の時自身）を示す。
	
    union_find2_2(int sz){
	
        par.resize(sz);
	
        for(int i=0;i<sz;++i) par[i]=i;
	
    }
	
    int find(int a){//根を探す
	
        if(par[a]==a) return a;
	
        else return par[a] = find(par[a]); //経路圧縮！！！
	
    }
	
    void unite(int a,int b){
	
        int root_a = find(a),root_b = find(b);  //aの根,bの根を調べて代入。
	
        par[root_a] = root_b;                   //根aの親をbにする
	
    }
	
    bool same(int a,int b){
	
        return find(a)==find(b);
	
    }
	
};
int main() {
    int num,que;
    cin >> num >> que;
    union_find2_2 uf(num);
    for(int i=0;i<que;i++){
        int type,x,y;
        cin >> type >> x >> y;
        if(type) cout << uf.same(x,y) << endl ;
        else uf.unite(x,y);
    }    
}



