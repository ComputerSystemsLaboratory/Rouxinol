#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    long long a[10000], n, i, sum =0;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a,a+n);
    cout << a[0] << " " << a[n-1] << " " << sum << endl;
}