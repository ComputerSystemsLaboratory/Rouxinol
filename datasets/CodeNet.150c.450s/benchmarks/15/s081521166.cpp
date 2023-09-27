#include <iostream>
using namespace std;

const int MAX_N = 10000;
const int MAX_Q = 500;

int main() {
    int n, q;
    int S[MAX_N], T[MAX_Q];

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> S[i];
    }
    

    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> T[i];
    }

    int ans = 0;
    for(int i = 0; i < q; i++) {
        for(int j = 0; j < n; j++) {
            if(S[j] == T[i]) {
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}

