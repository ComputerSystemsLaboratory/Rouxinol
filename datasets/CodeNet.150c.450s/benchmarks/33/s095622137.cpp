#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a),end()
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    int inpX, inpY, total;

    while( cin >> inpX >> inpY >> total, inpX||inpY||total ){
        int max = 0;
        int x = inpX + 100, y = inpY + 100;
        for(int i = 1; i < 1000; i++){
            if(i > total) break;
            for(int j = 1; j < 1000; j++){
                if(i + j > total) break;
                if(i * x / 100 + j * x / 100 == total && i * y / 100 + j * y / 100 > max){
                    max = i * y / 100 + j * y / 100;
                }
            }
        }
        cout << max << endl;
    }
}