//https://www.slideshare.net/hcpc_hokudai/binary-indexed-tree
//http://hos.ac/slides/20140319_bit.pdf
#include<iostream>
#include<vector>
#include<functional>
using namespace std;


//x の最も下の立っているビットは，x & -x で取り 出せる
template <class T> class BIT{
    private:
    vector<T> array;
    const int n;
    
    public:
    //constractor
    BIT(int _n) : array(_n + 1, 0), n(_n){}
    
    //sum [0,i]
    T sum(int i){
        T s = 0;
        while(i > 0){
            s += array[i];
            i -= i & -i;
        }
        return s;
    }

    //sum [i,j]
    T sum(int i, int j){
        T ret_i = sum(i -1);
        T ret_j = sum(j);
        return ret_j - ret_i;
    }

    // 1-index
    void add(int i, T x){
        while(i <= n){
            array[i] += x;
            i += i & -i;
        }
    }
};


// 問題例
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A&lang=jp


int main(){
    int n, q; cin >> n >> q;
    BIT<int> bit(n);
    for(int i=0; i<q; ++i){
        int c, x, y;
        cin >> c >> x >> y;

        if(c == 0){
            bit.add(x, y);
        }else{
            cout << bit.sum(x, y) << endl;
        }
    }
}
