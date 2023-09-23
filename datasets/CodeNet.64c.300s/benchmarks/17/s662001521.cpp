#include <iostream>

using namespace std;

int main(){
    int x, y, s;
    while(1){
        cin >> x >> y >> s;
        if(x + y + s == 0) break;
        int ans = 0;
        for(int i = 1; i < 1001; ++i){
            for(int j = 1; j < 1001; ++j){
                if((100 + x) * i / 100 + (100 + x) * j / 100 == s){
                    int now = (100 + y) * i / 100 + (100 + y ) * j / 100;
                    if(ans < now){
                        ans = now;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}