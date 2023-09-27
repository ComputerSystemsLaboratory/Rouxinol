#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int maxv = -2000000000;
    int minv = v[0];
    for(int i = 1; i < n; i++){
        maxv = max(maxv, v[i] - minv);
        minv = min(minv, v[i]);
    }
    cout << maxv << endl;
}
