
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <utility>
#include <queue>
#include <string>

using namespace std;

int main(){
    for (; ;) {
        int N ,M;
        cin >> N >> M;
        if (N==0 && M==0) break;
        vector<pair<int,int> > E(N);
        int ans=0;
        for (int i=0; i<N; i++) {
            int D,P;
            cin >> D >> P;
            E[i].first =P;
            E[i].second = D;
            ans+=D*P;
        }
        sort(E.begin(),E.end());
        for (int i=0;i<N;i++) {
            if (M>E[N-i-1].second) {
                ans -= E[N-i-1].first*E[N-i-1].second;
                M-=E[N-i-1].second;
            }else{
                ans -= M*E[N-i-1].first;
                break;
            }
        }
        cout << ans << endl;
    }
}