#include<bits/stdc++.h>                                                                              
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
#define VS vector<string>
int main(void) {
    int x,y,s;
    while(1) {
        cin >> x >> y >> s;
        int ans=0;
        int max=0;
        if(x==0&&y==0&&s==0) break;
        FOR(i,1,s-1) {
            FOR(j,1,s-1) {
                if(i*(100+x)/100+j*(100+x)/100 == s) {
                    ans = i*(100+y)/100 + j*(100+y)/100;
                    max = fmax(max, ans);
                }
            }
        }
        cout << max << endl;
    }
}