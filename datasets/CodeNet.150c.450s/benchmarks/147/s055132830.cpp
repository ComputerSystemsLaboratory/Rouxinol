#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    long long val;
    cin >> N;
    vector<int> ans(N+1,0);
    for(int a=1; a<101; a++) {
        for(int b=1; b<101; b++) {
            for(int c=1;c<101; c++) {
                val = a*a + b*b + c*c + a*b + b*c + c*a;
                if(val <= N) {
                    ans[val]++;
                }
            }
        }
    }
    for(int i =1; i <=N; i++) {
        cout<< ans[i]<<endl;
    }
    return 0;
}