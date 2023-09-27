#include <iostream>
using namespace std;

int main(){
    while(1){
        int N, A, B, C, X;
        cin >> N >> A >> B >> C >> X;
        if(N == 0) break;
        
        auto slot = [&](){ X = (A * X + B) % C; };
        
        auto frame = [&](int y){
            int t = 0;
            for(; y != X && t <= 10000; t++){
                slot();
            }
            return t;
        };
        
        int sum = 0;
        for(int i = 0; i < N; i++){
            int Y;
            cin >> Y;
            sum += frame(Y) + 1;
            slot();
        }
        sum -= 1;
        cout << (sum > 10000 ? -1 : sum) << endl;
    }
    return 0;
}