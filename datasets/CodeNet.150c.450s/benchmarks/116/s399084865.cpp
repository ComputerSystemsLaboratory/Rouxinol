#include <iostream>
using namespace std;

int main(){
    int n, k;
    while(true){
        if(cin >> n >> k){
            if(n == 0){
                break;
            }
            int a[n], b[n];
            for(int i = 0; i < n; i++){
                cin >> a[i];
                if(i == 0){
                    b[i] = a[i];
                }else{
                    b[i] = b[i - 1] + a[i];
                }
            }
            int ans = -1073741820;
            for(int i = 0; i < n - k; i++){
                if(ans <= b[i + k] - b[i]){
                    ans = b[i + k] - b[i];
                }
            }
            cout << ans << endl;
        }else{
            break;
        }
    }
    return 0;
}