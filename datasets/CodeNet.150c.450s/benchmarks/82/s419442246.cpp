#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

struct dyse{

    vector<int> x = {0,0,0,0,0,0};

    void set_dyse(){
        rep(i,6) cin >> x.at(i);
    }

    void ido(char dir){
        if(dir == 'N'){
            int tmp = x.at(0);
            x.at(0) = x.at(1);
            x.at(1) = x.at(5);
            x.at(5) = x.at(4);
            x.at(4) = tmp;
        }else if(dir == 'S'){
            int tmp = x.at(0);
            x.at(0) = x.at(4);
            x.at(4) = x.at(5);
            x.at(5) = x.at(1);
            x.at(1) = tmp;
        }else if(dir == 'W'){
            int tmp = x.at(0);
            x.at(0) = x.at(2);
            x.at(2) = x.at(5);
            x.at(5) = x.at(3);
            x.at(3) = tmp;
        }else if(dir == 'E'){
            int tmp = x.at(0);
            x.at(0) = x.at(3);
            x.at(3) = x.at(5);
            x.at(5) = x.at(2);
            x.at(2) = tmp;
        }
    }

    void ue(){
        cout << x.at(0) << endl;
    }

    void solve_migi(int jou, int zen){
        vector<int> umsu(4);
        for(umsu.at(0) =0;;umsu.at(0)++){
            if(x.at(umsu.at(0)) == jou) break;
        }
        for(umsu.at(1) =0;;umsu.at(1)++){
            if(x.at(umsu.at(1)) == zen) break;
        }
        umsu.at(2) = 5-umsu.at(0);
        umsu.at(3) = 5-umsu.at(1);
        
        rep(i,4){
            if(umsu.at(i) == 0 && umsu.at((i+1)%4) == 1){cout << x.at(2) << endl;break;}
            else if(umsu.at(i) == 1 && umsu.at((i+1)%4) == 0){cout << x.at(3) << endl;break;}
            else if(umsu.at(i) == 1 && umsu.at((i+1)%4) == 2){cout << x.at(0) << endl;break;}
            else if(umsu.at(i) == 2 && umsu.at((i+1)%4) == 1){cout << x.at(5) << endl;break;}
            else if(umsu.at(i) == 2 && umsu.at((i+1)%4) == 0){cout << x.at(1) << endl;break;}
            else if(umsu.at(i) == 0 && umsu.at((i+1)%4) == 2){cout << x.at(4) << endl;break;}
        }
        return;
    }
};

int main(){
    dyse d;
    d.set_dyse();

    int q,jou,zen;
    cin >> q;
    rep(i,q){
        cin >> jou >> zen;
        d.solve_migi(jou,zen);
    }

}   
