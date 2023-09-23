#include <iostream>
#include <vector>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int days(int y, int m, int d){
    int s = 0;
    for(int i = 1; i < y; ++i){
        if(i % 3){
            s += 195;
        }
        else{
            s += 200;
        }
    }
    for(int i = 1; i < m; ++i){
        if(y % 3 && !(i % 2)){
            s += 19;
        }
        else{
            s += 20;
        }
    }
    return s + d;
}

int n;

int main(){
    cin >> n;
    rep(i, n){
        int y, m, d;
        cin >> y >> m >> d;
        cout << days(1000, 1, 1) - days(y, m, d) << endl;
    }
    return 0;
}
