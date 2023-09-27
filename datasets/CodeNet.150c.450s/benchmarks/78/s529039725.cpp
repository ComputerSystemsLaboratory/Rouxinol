#include<iostream>

using namespace std;
#define MAX 1000000
#define INF 1000000000

int dp1[MAX+1],dp2[MAX+2];

int main() {
    for(int i = 1;i <= MAX;i++) {
        dp1[i] = INF;
        dp2[i] = INF;
    }

    for(int n = 1;n * (n + 1) * (n + 2) / 6 <= MAX;n++) {
        int a = n * (n + 1) * (n + 2) / 6;
        for(int i = a;i <= MAX;i++) {
            dp1[i] = min(dp1[i],dp1[i - a] + 1);
        }
        if(a % 2 == 0)continue;
        for(int i = a;i <= MAX;i++) {
            dp2[i] = min(dp2[i],dp2[i - a] + 1);
        }
    }

    while(true) {
        int n;
        cin >> n;
        if(n == 0)break;
        cout << dp1[n] << " " << dp2[n] << endl;
    }
    return 0;
}

