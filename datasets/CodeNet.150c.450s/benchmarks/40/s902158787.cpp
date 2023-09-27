#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<string, int>;

class dice{
public:
    vector<int> me = {1, 2, 3, 4, 5, 6};
    void N(){
        vector<int> tmp(6);
        tmp[0] = me[1]; tmp[1] = me[5]; tmp[2] = me[2];
        tmp[3] = me[3]; tmp[4] = me[0]; tmp[5] = me[4];
        me = tmp;
    }
    void E(){
        vector<int> tmp(6);
        tmp[0] = me[3]; tmp[1] = me[1]; tmp[2] = me[0];
        tmp[3] = me[5]; tmp[4] = me[4]; tmp[5] = me[2];
        me = tmp;
    }
    void S(){
        vector<int> tmp(6);
        tmp[0] = me[4]; tmp[1] = me[0]; tmp[2] = me[2];
        tmp[3] = me[3]; tmp[4] = me[5]; tmp[5] = me[1];
        me = tmp;
    }
    void W(){
        vector<int> tmp(6);
        tmp[0] = me[2]; tmp[1] = me[1]; tmp[2] = me[5];
        tmp[3] = me[0]; tmp[4] = me[4]; tmp[5] = me[3];
        me = tmp;
    }
    int TOP(){
        return me[0];
    }
};

int main(void){
    dice d;
    rep(i, 6) cin >> d.me[i];
    string q;
    cin >> q;
    rep(i, q.size()){
        switch (q[i]){
            case 'N':
                d.N();
                break;
            case 'E':
                d.E();
                break;
            case 'S':
                d.S();
                break;
            case 'W':
                d.W();
                break;
        }
    }
    cout << d.TOP() << endl;
    return 0;
}
