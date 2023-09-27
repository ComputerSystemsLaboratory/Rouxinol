#include <bits/stdc++.h>
using namespace std;
int n;
int A[20];
int q;
int m;

bool rec(int i, int m, int acc){
    if(m == acc)
        return true;
    if(i == n)
        return false;
    else
        return rec(i+1, m, acc) || rec(i+1, m, acc + A[i]);
}

int main() {
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> A[i];
    cin >> q;
    while(q--){
        cin >> m;
        cout << (rec(0, m, 0) ? "yes" : "no") << endl;
    }
}