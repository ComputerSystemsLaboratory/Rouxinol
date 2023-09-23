#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    while(cin >> n, n){
        int ans = 1<<30;
        for(int i=0; i*i*i <= n; i++){
            int j = sqrt(n - i*i*i);
            if(n < i*i*i + j*j) continue;
            ans = min(ans, i+j+(n-i*i*i-j*j));
        }
        cout << ans << endl;
    }
}