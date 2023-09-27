#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N;
    cin >> N;
    vector<ll> cnt(N+1);
        for(int i = 1; i < sqrt(N); i++){
            for(int j = 1; j <sqrt(N); j++){
                for(int k = 1; k < sqrt(N); k++){
                    int v = i*i + j*j + k*k + i*j + j*k + k*i;
                    if(v <= N) cnt[v]++;
                }
            }
        }
    for(int i=1; i<=N; i++) cout << cnt[i] << endl;
    return 0;
}