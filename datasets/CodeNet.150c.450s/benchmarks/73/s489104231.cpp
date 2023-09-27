#include <bits/stdc++.h>
using namespace std;

class BIT{
private:
    int N;
    vector<int> data;
    
public:
    BIT(int N): N(N){
        data.assign(N+1, 0);
    }
    int sum(int i){
        int x = 0;
        while(0 < i){
            x += data[i];
            i -= i & -i;
        }
        return x;
    }
    int sum(int x, int y){
        return sum(y) - sum(x-1);
    }
    void add(int i, int x){
        while(i <= N){
            data[i] += x;
            i += i & -i;
        }
    }
};

int main(){
    int N, Q;
    cin >> N >> Q;
    
    BIT bit(N);
    for(int i=0; i<Q; i++){
        int com, x, y;
        cin >> com >> x >> y;
        if(com == 0)
            bit.add(x, y);
        if(com == 1)
            cout << bit.sum(x, y) << endl;
    }
    
    return 0;
}