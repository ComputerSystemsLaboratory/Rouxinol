#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

class BIT{
    long long *tree;
    int depth;

    public:
    BIT(unsigned int n){
        for(depth=0;(1<<depth)<n;depth++) ;
        tree = new long long[1<<depth]();
    }

    void add(unsigned int index, long long value){
        index++;
        for(;index<=(1<<depth);index+=index&-index){
            tree[index-1]+=value;
        }
    }

    long long sum(unsigned int index){
        index++;
        long long s=0;
        for(;index>0;index-=index&-index){
            s+=tree[index-1];
        }

        return s;
    }

    long long sum(unsigned int left, unsigned int right){
        return sum(right-1) - sum(left-1);
    }

    ~BIT(){
        delete[] tree;
    }
};
/*
    BIT bit(N);     // 長さ N の列について管理
    bit.add(i, v);  // 列(0-indexed)の i 番目に v を加算
    bit.sum(i);     // 列(0-indexed)の 0 番目から i 番目までの i+1 個の要素の和を返す
                    // i 番目も和に*含まれる*ことに注意
    bit.sum(l,r);   // 列の i ∈ [l, r) 番目の要素の和を返す
                    // r 番目は和に*含まない*ことに注意
*/

int main(){
    ll n;
    ll A[200000], AA[200000];
    unordered_map<ll, ll> f;
    cin >> n;
    for(ll i=0;i<n;i++){
        cin >> A[i];
        AA[i]=A[i];
    }
    sort(AA, AA+n);
    ll j=0;
    for(ll i=0;i<n;i++){
        if(i==0 || AA[i]!=AA[i-1]){
            f[AA[i]]=j;
            j++;
        }
    }
    BIT B(200000);
    ll inversion = 0;
    for(ll i=0;i<n;i++){
        ll tt = B.sum(f[A[i]]);
        ll t  = i - tt;
        B.add(f[A[i]], 1);

        inversion += t;
    }
    cout << inversion << endl;
    
    return 0;
}
