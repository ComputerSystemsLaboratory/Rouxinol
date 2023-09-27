#include <bits/stdc++.h>
using namespace std;

int S[10000];
int n, q;
int C;

int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> S[i];
    }
    cin >> q;
    for(int i=0; i<q; i++){
        int t;
        cin >> t;
        for(int j=0; j<n; j++){
            if(S[j] == t){
                C++;
                break;
            }
        }
    }
    cout << C << endl;
}