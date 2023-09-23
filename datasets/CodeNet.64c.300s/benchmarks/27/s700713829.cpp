#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,x,ans=0;  //解答数カウント
    
    while (1) {
        cin >>  n >> x;
        if (n==0 && x==0) {
            break;
        }
        for (int i=1; i<n+1; i++) {
            for (int j=i+1; j<n+1; j++) { //iの値より大きい値からループ
                for (int k=j+1; k<n+1; k++) { //jの値より大きい値からループ
                    if (i+j+k == x) { //合計値がxになった時カウント
                        ans++;
                    }
                }
            }
        }
        cout << ans <<endl;
        ans = 0;
    }
    return 0;
}
