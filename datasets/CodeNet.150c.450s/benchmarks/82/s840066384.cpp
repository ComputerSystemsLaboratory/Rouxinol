#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,s,n) for(int i=s;i<n;i++)
#define all(a) (a).begin(),(a).end()

struct dice {
    int d[6];

    void rotation(char com){
        if(com == 'E'){
            int tmp = d[0];
            d[0] = d[3];
            d[3] = d[5];
            d[5] = d[2];
            d[2] = tmp;
        }
        else if(com == 'S'){
            int tmp = d[4];
            d[4] = d[5];
            d[5] = d[1];
            d[1] = d[0];
            d[0] = tmp;
        }
        else if(com == 'N'){        
            int tmp = d[0];
            d[0] = d[1];
            d[1] = d[5];
            d[5] = d[4];
            d[4] = tmp;
        }
        else if(com == 'W'){
            int tmp = d[0];
            d[0] = d[2];
            d[2] = d[5];
            d[5] = d[3];
            d[3] = tmp;        
        }
        else if(com == 'R'){
            int tmp = d[3];
            d[3] = d[1];
            d[1] = d[2];
            d[2] = d[4];
            d[4] = tmp;
        }
    }

    int guess(int U, int F){
        int cnt = 0;
        while(U != d[0]){
            if(cnt % 2)rotation('N');
            else rotation('W');
            cnt++;
        }

        while(F != d[1])
            rotation('R');

        return d[2];
    }
};

int main(){
    dice D;
    rep(i,6)cin >> D.d[i];
    int q; cin >> q;
    rep(i,q){
        int U, F;
        cin >> U >> F;
        cout << D.guess(U, F) << endl;
    }

    return 0;
}
