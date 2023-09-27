#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cout << a[n - 1 - i];
        if(i == n - 1) break;
        cout << ' ';
    }
    cout << endl;
}
