#include <iostream>
using namespace std;

int main(void){
    while(true){
        int n;
        cin >> n;
        if(n == 0){ break; }

        int ans = 0;
        for(int i = 0; i <= n; i++){
            for(int j = i + 2; j <= n; j++){
                int sum = j * (j + 1) / 2 - i * (i + 1) / 2;
                if(sum == n){ ++ans; }
            }
        }

        cout << ans << endl;
    }
    return 0;
}