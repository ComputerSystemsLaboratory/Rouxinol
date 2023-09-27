#include "bits/stdc++.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for(int i=k; i<n; i++) {
        if(arr[i-k]>=arr[i])
            cout << "No\n";
        else
            cout << "Yes\n";
    }

    return 0;
}
