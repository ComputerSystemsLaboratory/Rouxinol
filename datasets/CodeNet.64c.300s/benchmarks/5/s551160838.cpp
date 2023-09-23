#include <iostream>
#include <algorithm>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

int main() {
    int a[10];
    REP(i,10)
        cin >> a[i];
    sort(a,a+10);
    reverse(a,a+10);
    REP(i,3)
        cout << a[i] << '\n';
}