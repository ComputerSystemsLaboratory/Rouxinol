#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

const int MAX_N = 1000000;

int cnt1[MAX_N+1],cnt2[MAX_N+1];

int main()
{
    rep(i,MAX_N){
        cnt1[i] = cnt2[i] = 10*MAX_N;
    }
    cnt1[0] = cnt2[0] = 0;
    for(int j=1;;j++){
        int val = j*(j+1)*(j+2)/6;
        if(val > MAX_N){
            break;
        }
        for(int i=0;i+val<=MAX_N;i++){
            cnt1[i+val] = min(cnt1[i+val],cnt1[i]+1);
        }
        if(val%2){
            for(int i=0;i+val<=MAX_N;i++){
                cnt2[i+val] = min(cnt2[i+val],cnt2[i]+1);
            }
        }
    }
    while(1){
        int n;
        cin >> n;
        if(n == 0){
            break;
        }
        cout << cnt1[n] << " " << cnt2[n] << "\n";
    }
}

