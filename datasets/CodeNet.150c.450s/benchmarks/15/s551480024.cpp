#include <iostream>
using namespace std;

const int MAX_N = 10000;

bool linearSearch(int* S, int n, int key) {
    S[n] = key;

    int i = 0;
    while(S[i] != key) {
        i++;
    }
    
    return i != n;
}

int main() {
    int n, q;
    int S[MAX_N + 1];

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> S[i];
    }
    
    cin >> q;
    
    int ans = 0;
    int key;
    for(int i = 0; i < q; i++) {
        cin >> key;
        if(linearSearch(S, n, key)) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}

