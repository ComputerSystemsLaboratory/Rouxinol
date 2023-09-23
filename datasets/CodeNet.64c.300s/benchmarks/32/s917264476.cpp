#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    long long int n,a,ans1=1000000,ans2=-1000000,ans3=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        ans1 =min(ans1,a);
        ans2 =max(ans2,a);
        ans3 += a;
    }
    cout << ans1 << " " << ans2 << " " << ans3 << endl;
    return 0;
}