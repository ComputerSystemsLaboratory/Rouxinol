#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (int)(n); ++i)
using namespace std;
int flag = 1;

int main(){
    cin >> flag;
    while(flag){
        int temp = 0, score = 0;
        int M = 0, m = 1000;
        REP(i,flag){
            cin >> temp;
            score += temp;
            M = max(temp,M);
            m = min(temp,m);
        }
        cout << (score-M-m)/(flag-2) << endl;
        cin >> flag;
    }
    return 0;
}