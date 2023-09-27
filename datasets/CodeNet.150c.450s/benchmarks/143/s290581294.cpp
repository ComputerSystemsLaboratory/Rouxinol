#include <iostream>

using namespace std;
const int N = 2e5 + 1;
long long a[N] , avail[N];
int n , q;
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    long long sum = 0;
    for (int i = 1; i <= n; i++){
        sum = sum + a[i];
        avail[a[i]]++;
    }
    cin >> q;
    while (q--){
        int b , c , sl;
        cin >> b >> c;
        sum = sum - 1LL * b * avail[b];
        sum = sum + 1LL * c * avail[b];
        sl = avail[b];
        avail[b] = 0;
        avail[c] += sl;
        cout << sum << "\n";
    }
    return 0;
}