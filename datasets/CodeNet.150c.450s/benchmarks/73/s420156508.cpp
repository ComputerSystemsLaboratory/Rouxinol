#include<iostream>
#include<vector>

using namespace std;
using T = long long;
struct BinaryIndexedTree{
private:
    vector<T> vect;
    const int n;
public:
    BinaryIndexedTree(int _n) : vect(_n + 1, 0), n(_n) {}

    T sum(int i) {
        i++;
        T s = 0;
        while( i > 0){
            s += vect[i];
            i -= i & (-i);
        }
        return s;
    }
    //[i,j) 外からは0index
    T sum(int i, int j) {
        i--;j--;
        T ret_i = sum(i);
        T ret_j = sum(j);
        return ret_j - ret_i;
    }
    void add(int i, T x) {
        i++;
        while(i <= n) {
            vect[i] += x;
            i += i & (-i);
        }
    }
};

int main () {
    int n,q;
    cin >> n >> q;
    BinaryIndexedTree bit(n);
    int c,x,y;

    for(int i=0; i<q ; i++){
        cin >> c;
        if( c==0 ){
            cin >> x >> y;
            x--;
            bit.add(x,y);
        }else{
            cin >> x >> y;
            x--;
            cout << bit.sum(x,y) << endl;
        }
    } 

    return 0;
}

