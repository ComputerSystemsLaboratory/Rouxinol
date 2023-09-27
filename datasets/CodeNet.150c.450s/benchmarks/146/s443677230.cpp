#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    float p[4][2], ab, cd;

    cin >> n;

    for(int i = 0; i < n; ++i){

        for(int j = 0; j < 4; ++j){
            for(int k = 0; k < 2; ++k){
                cin >> p[j][k];
            }
        }

        ab = (p[0][1] - p[1][1]) / (p[0][0] - p[1][0]);
        cd = (p[2][1] - p[3][1]) / (p[2][0] - p[3][0]);

        if(ab == cd){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }

}