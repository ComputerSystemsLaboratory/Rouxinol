#include <iostream>
#include <vector>

using namespace std;

// (weighted) UnionFind
class UnionFind {
    public:
        UnionFind(int n) : mPar(n), mRnk(n,0), mWeight(n,0) {
            for(int i = 0; i < n; ++i) mPar[i] = i;
        }

        int find(int x){
            if(mPar[x]==x) return x;
            mWeight[x] += mWeight[mPar[x]]; // 一つ上の親からの累積和
            return mPar[x] = find(mPar[x]);
        }

        bool same(int x,int y){
            return find(x) == find(y);
        }
        
        int diff(int x, int y){
            x = find(x);
            y = find(y);
            return mWeight[y] - mWeight[x];
        }

        void unite(int x,int y, int w = 0){
            x = find(x);
            y = find(y);
            if(x==y) return;
            w += mWeight[x]; w -= mWeight[y];
            if(mRnk[x] < mRnk[y]) swap(x,y), w = -w;
            mPar[y] = x;
            mWeight[y] = w;
            if(mRnk[x] == mRnk[y]) ++mRnk[x];
        }

    private:
        vector<int> mPar, mRnk, mWeight;
};

int main(){
    int n,q,c,x,y;
    cin >> n >> q;
    UnionFind uf(n);
    for(int i = 0; i < q; ++i){
        cin >> c >> x >> y;
        if(c==0){
            uf.unite(x,y);
        } else {
            cout << uf.same(x,y) << '\n';
        }
    }
    return 0;
}
