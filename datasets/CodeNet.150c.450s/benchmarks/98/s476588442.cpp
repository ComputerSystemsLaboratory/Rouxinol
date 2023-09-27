#include<iostream>
using namespace std;

int main() {
    int n,m;
    while(cin>>n>>m, n|m) {
        int t[n],h[m],tsum=0,hsum=0;
        for(int i=0; i<n; ++i) { cin>>t[i]; tsum+=t[i]; }
        for(int i=0; i<m; ++i) { cin>>h[i]; hsum+=h[i]; }

        int hh = -1, tt = -1, tp = 1<<29;
        for(int i=0; i<n; ++i) {
            for(int j=0; j<m; ++j) {
                if(tsum-t[i]+h[j] == hsum-h[j]+t[i]) {
                    if(t[i]+h[j] < tp) {
                        tt = t[i];
                        hh = h[j];
                        tp = t[i]+h[j];
                    }
                }
            }
        }

        if(hh == -1) cout<<-1<<endl;
        else cout<<tt<<" "<<hh<<endl;
    }
}