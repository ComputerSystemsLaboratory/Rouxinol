#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

class dice{
public:
    int face[6];

    dice(){}

    void rollN(){
        int c = face[0];
        face[0] = face[1];
        face[1] = face[5];
        face[5] = face[4];
        face[4] = c;
    }

    void rollS(){
        int c = face[0];
        face[0] = face[4];
        face[4] = face[5];
        face[5] = face[1];
        face[1] = c;
    }

    void rollW(){
        int c = face[0];
        face[0] = face[2];
        face[2] = face[5];
        face[5] = face[3];
        face[3] = c;
    }

    void rollE(){
        int c = face[0];
        face[0] = face[3];
        face[3] = face[5];
        face[5] = face[2];
        face[2] = c;
    }

    void rollZ(){
        int c = face[1];
        face[1] = face[2];
        face[2] = face[4];
        face[4] = face[3];
        face[3] = c;
    }

};

int main() {
    dice A;
    rep(i, 6){
        cin >> A.face[i];
    }

    int q; cin >> q;

    rep(i, q){
        int a, b; cin >> a >> b;

        int ans;
        rep(j, 4){
            if (A.face[0] == a) break;

            A.rollN();

            if (j == 3){
                A.rollE();
                if(A.face[0] == a)break;
                A.rollE();
                A.rollE();
            }
        }

        rep(j, 4){
            if(A.face[1] == b)break;
            A.rollZ();
        }

        cout << A.face[2] << endl;

    }
}
