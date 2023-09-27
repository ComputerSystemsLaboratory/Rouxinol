#include <iostream>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    int x[n];
    for (i=0;i<n;i++) cin >> x[i];
    for (;--i>0;) cout << x[i] << " ";
    cout << x[0] << endl;
    return 0;
}