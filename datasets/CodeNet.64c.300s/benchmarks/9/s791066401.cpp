#include <iostream>
using namespace std;

int main(){
    int ans = 100000;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        ans += ans*0.05;
        if(ans%1000!=0)
            ans = ans-ans%1000 + 1000;
    }
    cout << ans << endl;

    return 0;
}