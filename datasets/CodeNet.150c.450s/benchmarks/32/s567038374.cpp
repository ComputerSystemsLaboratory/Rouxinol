#include <bits/stdc++.h>
#define ll long long
#define INF 1000000000
using namespace std;
int main(){
    int N,nmax,nmin;
    while(1){
        cin >> N;
        cin >> nmin >> nmax;
        if(N+nmax+nmin==0) return 0;
        nmin--; nmax--;
        int P[N];
        for(int i=0;i<N;i++) cin >> P[i];

        int ans = 0,gap=P[nmin]-P[nmin+1];
        for(int i=nmin;i<=nmax;i++){
            //cout << P[i]-P[i+1] << endl;
            if(gap <= P[i]-P[i+1]){
                ans = i+1;
                gap = P[i]-P[i+1];
            }
        }
        cout << ans << endl;

    }
}
