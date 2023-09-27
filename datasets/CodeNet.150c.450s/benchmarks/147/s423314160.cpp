#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int l=0;
    int ans[10050]={0};
    for (int i=1; i<=100;++i) {
        for (int j=1; j<=100;++j) {
            for (int k=1; k<=100;++k) {
                l = i*i + j*j + k*k + i*j + j*k + k*i;
                if (l <= 10000) ans[l]++;
            }
        }
    }
    for (int i=1; i<=N; ++i){
        cout << ans[i] << endl;
    }
    return 0;
}