#include<bits/stdc++.h>
using namespace std;
using i64 = int_fast64_t;
#define rep(i, N) for(int (i) = 0; (i) < (N); (i)++)
#define all(v) (v).begin(), (v).end()
#define eb emplace_back

int main(){
    int N, A, B, C, X;
    while(cin >> N >> A >> B >> C >> X, N != 0){
        int flame = 0;
        for(int i = 0; i < N; i++){
            int Y; cin >> Y;
            while(flame++ <= 10000){
                if(X == Y) {
                    X = (A * X + B) % C;
                    break;
                }
                X = (A * X + B) % C;
            }
        }
        if(flame-1 > 10000) flame = 0;
        cout << flame-1 << endl;
    }
}

