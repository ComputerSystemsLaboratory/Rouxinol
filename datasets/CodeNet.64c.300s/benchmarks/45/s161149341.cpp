
#include <iostream>
using namespace std;

int main() {

while(true){
    int n,m;
    float p;
    cin >> n >> m >> p;
    if(n == 0 && m == 0 && p == 0)break;
    p = (100-p)*0.01;
    
    int x[n+1];
    int sum = 0;
    for(int i = 1;i <= n;i++){
        cin >> x[i];
        sum += x[i];
    }
    int ans = 0;
    ans = sum * 100 * p;
    if(x[m] == 0) ans = 0;
    else ans /= x[m];
    
    cout << ans << "\n";
}
    
return 0;
}