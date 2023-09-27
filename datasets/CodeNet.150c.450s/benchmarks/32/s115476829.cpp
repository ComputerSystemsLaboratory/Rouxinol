#include <bits/stdc++.h>
using namespace std;

int main() {

    while(1){

        int m,nmin,nmax;

        cin >> m >> nmin >> nmax;

        if(m == 0 && nmin == 0 && nmax == 0) break;

        int p[m];

        for(int i=0; i<m; i++){
            cin >> p[i];
        }

        sort(p,p+m,greater<int>());

        pair<int,int> ans = make_pair(0,0);

        for(int i=nmin; i<=nmax; i++) {
            if(ans.second <= p[i-1] - p[i]){
                ans = make_pair(i,p[i-1] - p[i]);
            }
        }

        cout << ans.first << endl;

    }

    return 0;
}