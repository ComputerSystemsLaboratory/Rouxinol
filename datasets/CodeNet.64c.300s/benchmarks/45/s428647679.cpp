#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    while(1){
        int N, M, P; cin >> N >> M >> P;
        if(N == 0) break;
        int sum = 0;
        int win;
        for(int i = 1; i <= N; i++){
            int input;
            cin >> input;
            sum += input;
            if(i == M) win = input;
            
        }
        if(win == 0){
            cout << 0 << endl;
            continue;
        }
        sum = sum*(100 - P);

        cout << sum/win << endl;
    }
    return 0;

}    