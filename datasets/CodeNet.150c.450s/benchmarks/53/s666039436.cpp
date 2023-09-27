#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define rep(i,s,e) for(int (i) = (s);(i) <= (e);(i)++)

int main() {
    int N;
    cin >> N;
    cout << N << ":";
    for(int i = 2;i * i <= N;i++){
        while(N % i == 0){
            cout << " " << i;
            N /= i;
        }
    }
    if(N != 1){
        cout << " " << N;
    }
    cout << endl;
}

