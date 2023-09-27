#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class UnionFind{
    public:
        vector<int> rank,parent;
        //?????????????????????
        UnionFind(int n){
            rank.resize(n,0);
            parent.resize(n,0);
            for(int i=0;i<n;i++){
                parent[i]=i;
                rank[i]=0;
            }
        }

        //???????±???????(??£??¨???????±???????)
        int find_root(int x){
            if(parent[x]==x)
                return x;
            else
                return parent[x] = find_root(parent[x]);
        }

        //x??¨y????±??????????????????????
        void unite(int x,int y){
            //x,y???????????????????±??????????????????£??¨????????????
            x = find_root(x);
            y = find_root(y);
            //??£??¨???????????????????????§???????????????
            if(x==y) return;

            if(rank[x]<rank[y]){
                //x??????y?????¨????????????????????????x?????????y?????????
                parent[x]=y;
            }else{
                //x??????y?????¨????????????????????????y?????????x?????????
                parent[y]=x;
                //x??¨y?????¨???????????????????????????x????????????1?¢???????
                if(rank[x]==rank[y]) rank[x]++;
            }
        }

        //x??¨y???????????????????±???????????
        bool same(int x,int y){
            return find_root(x)==find_root(y);
        }
};

int main(){
    int n,q;
    cin >> n >> q;
    UnionFind uf(n);
    for(int i=0;i<q;i++){
        int c,x,y;
        cin>>c>>x>>y;
        if(c==0){
            uf.unite(x,y);
        }else{
            bool f=uf.same(x,y);
            if(f) cout<<1<<endl;
            else cout<<0<<endl;
        }
    }
}