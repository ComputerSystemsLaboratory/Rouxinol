#include <bits/stdc++.h>

using namespace std;

int cnt;
int n[110];

void p() {
    for(int i = 0; i < cnt; i++) {
        if(i != 0) cout << " ";
        cout << n[i];
    }
    cout << endl;
}
int main() {
    cin >> cnt;
    for(int i =0; i < cnt; i++) cin >> n[i];
    p();
    for(int i = 1; i < cnt; i++) {
        int l = i - 1;
        int value = n[i];
        while(l >= 0 && n[l] > value) {
            n[l+1] = n[l];
            l--;
        }
        n[l+1] = value;
        p();
    }
}
