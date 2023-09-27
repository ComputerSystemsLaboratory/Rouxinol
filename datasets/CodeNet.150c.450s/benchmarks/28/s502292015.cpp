#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; cin>>n>>k;
    vector<int> w(n); for(auto& e: w) cin>>e;

    int a=1<<28;
    int P=2*a-1;
    for(; a>0; a>>=1) {
        int c=1;
        int t=P-a;
        for(int i=0, s=0; i<n; ++i) {
            if (w[i]>t) { c=k+1; break; }
            if (s+w[i]>t) {
                ++c;
                s=w[i];
            }
            else {
                s+=w[i];
            }
        }
        if (c<=k) P=t;
    }
    cout<<P<<endl;
}

