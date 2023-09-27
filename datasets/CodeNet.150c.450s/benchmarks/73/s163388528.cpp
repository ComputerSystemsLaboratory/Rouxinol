#include <iostream>
#include <vector>

using namespace std;

template<class T>
class BinaryIndexedTree {
    public:
        BinaryIndexedTree(int size) : mData(size+1) {}
        
        void add(int i, T x){
            for(; i <= mData.size(); i += i & -i){
                mData[i] += x;
            }
        }

        T sum(int i){
            T sum = 0;
            for(; i > 0; i -= i & -i){
                sum += mData[i];
            }
            return sum;
        }
    private:
        vector<T> mData;
};

int main(){
    int n,q,c,x,y;
    cin >> n >> q;
    BinaryIndexedTree<int> bit(n);
    for(int i = 0; i < q; ++i){
        cin >> c >> x >> y;
        if(c==0){
            bit.add(x,y);
        } else {
            cout << bit.sum(y) - bit.sum(x-1) << '\n';
        }
    }
    return 0;
}



