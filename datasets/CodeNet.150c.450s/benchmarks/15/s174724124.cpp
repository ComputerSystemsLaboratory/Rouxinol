#include <iostream>
#include <string>
using namespace std;

int main(){
    int S[10010], n, q, x, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> S[i];
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> x;
        for(int j = 0 ; j < n; j++){
            if(S[j] == x){
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
