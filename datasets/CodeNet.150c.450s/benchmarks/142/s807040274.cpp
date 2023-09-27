#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, k, a[2000000];
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = k; i < n; i++){
        if(a[i-k] < a[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}