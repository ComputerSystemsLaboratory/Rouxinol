#include <iostream>
using namespace std;
int main(){
    int n,x;
    while(true){
        cin >> n >> x;
        if(n==0 && x == 0) break;
        int i,j,k;
        int ans = 0;
        for(i=1;i<n+1;i++){
            for(j=i+1;j<n+1;j++){
                for(k=j+1;k<n+1;k++){
                    if(i+k+j == x) ans++;
                    if(i+k+j > x) break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
