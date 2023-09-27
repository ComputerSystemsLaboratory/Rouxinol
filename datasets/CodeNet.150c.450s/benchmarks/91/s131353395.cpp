#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n,num[999999] = {0},i,j,ans;

    while(cin >> n){
        ans = 0;
        for(i = 0;i <= n;i++){
            num[i] = 1;
        }

        for(i = 2;i <= sqrt(n);i++){
            if(num[i]){
                for(j = 0;i * (j + 2) <= n;j++){
                    num[i * (j + 2)] = 0;
                }
            }
        }

        for(i = 2;i <= n;i++){
            if(num[i]){
                ans++;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}