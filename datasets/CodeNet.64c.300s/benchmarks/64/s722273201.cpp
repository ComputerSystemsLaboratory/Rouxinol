#include <iostream>
using namespace std;
 
int main() {
    int x,y,tmp,ans;
    cin >> x >> y;

    if (x <= y){
        tmp = y;
        y = x;
        x = tmp;
    }
    ans = x;
    while(1){
        x = x%y;
        if (x == 0) break;
        else {
            ans = x;
            if (x <= y){
                tmp = y;
                y = x;
                x = tmp;
            }
        }
    }
    cout << ans << endl;
    return 0;
}