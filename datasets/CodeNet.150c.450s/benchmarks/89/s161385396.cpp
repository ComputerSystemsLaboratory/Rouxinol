#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

int p[1000001];
int main(void){
    int a, d, n;
    p[0] = p[1] = -1;
    for(int i=2; i<=sqrt(1000000); ++i) {
        if(p[i] == 0) {
            for(int j=2; i*j<=1000000; ++j) {
                p[i*j] = -1;
            }
        }
    }
    while(cin >> a >> d >> n && a) {
        int cnt = 0;
        for(int i=a; ; i+=d) {
            if(p[i] == 0) cnt++;
            if(cnt==n) {
                cout << i << endl;
                break;
            }
        }
    }
}