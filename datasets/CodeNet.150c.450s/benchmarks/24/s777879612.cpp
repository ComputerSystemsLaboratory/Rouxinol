#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, M;
    while(cin >> N >> M && N){
        int d, p, dp[11];
        for(int i=0; i<11; ++i) dp[i] = 0;
        for(int i=0; i<N; ++i){
            cin >> d >> p;
            dp[p] += d;
        }
        int ex = 0;
        for(int i=10;i>0;--i){
            if(M >= dp[i]) M -= dp[i];
            else{
                ex += (dp[i] - M) * i;
                M = 0;
            }
        }
        cout << ex << endl;
    }
    return 0;
}