#include<iostream>

using namespace std;

int main() {
    int n, x, i, j, k;
    while(cin >> n >> x, n||x){
      int ans = 0;
        for (i=1;i<=n;i++){
            for(j=i+1;j<=n;j++){
                for(k=j+1;k<=n;k++){
                    if(i+j+k == x)
                        ans++;
                }
            }
        }
        cout << ans << endl;
    }
}