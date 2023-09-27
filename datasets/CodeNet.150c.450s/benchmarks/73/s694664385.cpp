#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <cstring>
#include <utility>

using namespace std;

class SegTree{
public:
    int n;
    int defaultValue;
    vector<int> dat;

    SegTree(int m, int value){
        n = 1;
        while(n < m){
            n *= 2;
        }
        dat = vector<int>(2 * n - 1, value);
        defaultValue = value;
    }

    void update(int i, int value){
        i += n - 1;
        dat[i] += value;
        while(i > 0){
            i = (i - 1) / 2;
            dat[i] = ope(dat[2 * i + 1], dat[2 * i + 2]);
        }
    }

    int query(int a, int b){
        return query(a, b, 0, 0, n);
    }
private:
    int query(int a, int b, int k, int l, int r){
        if(r <= a || b <= l){
            return defaultValue;
        }
        if(a <= l && r <= b){
            return dat[k];
        }
        else{
            int vl = query(a, b, 2 * k + 1, l, (l + r) / 2);
            int vr = query(a, b, 2 * k + 2, (l + r) / 2, r);
            return ope(vl, vr);
        }
    }

    int ope(int a, int b){
        return a + b;
    }
};

int main(){

    int n, q;
    cin >> n >> q;
    SegTree sg(n, 0);
    int com, x, y;
    for(int i = 0; i < q; i++){
        cin >> com >> x >> y;
        if(com == 0){
            sg.update(x - 1, y);
        }
        else{
            cout << sg.query(x - 1, y) << "\n";
        }
    }

    return 0;
}
