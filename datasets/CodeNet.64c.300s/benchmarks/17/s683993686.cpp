#include <iostream>
#include <cmath>

using namespace std;

int calc(int x, int s, int t){
    return s*(100+x)/100 + t*(100+x)/100;
}

int main(){
    int x, y, s;
    while(cin >> x >> y >> s, x+y+s){
        int ans = 0;
        for(int i=1; i < s; i++){
            for(int j=1; j < s; j++){
                if(calc(x, i, j) == s && ans < calc(y, i, j)) ans = calc(y, i, j);
            }
        }
        cout << ans << endl;
    }
}