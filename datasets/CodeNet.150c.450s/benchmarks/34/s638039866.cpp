#include <iostream>
#include <cstring>

using namespace std;

int memo[31];

int solve(int remain){
    int cnt = 0;

    if(memo[remain] != -1) return memo[remain];

    if(remain <= 0) return 0;
    if(remain == 1) return 1;
    if(remain == 2) return 2;
    if(remain == 3) return 4;

    for(int i=1;i<=3;++i){
        cnt += solve(remain - i);
    }

    return memo[remain] = cnt;
}


int main(void){
    int n;
    int val;

    while(cin >> n, n > 0){
        memset(memo,-1,sizeof(int)*31);

        val = solve(n)/10;
        val = val < 366 ? 1 : val % 365 == 0 ? val / 365 : val/365 + 1;
        cout << val << endl;
    }
}