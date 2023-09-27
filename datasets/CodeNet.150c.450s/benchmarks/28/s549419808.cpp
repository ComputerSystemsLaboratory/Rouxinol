#include <iostream>
#include <algorithm>
#include <utility>
#include <limits>
using namespace std;

int w[100000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    int l, r, m;
    int truck, weight;
    int wm=numeric_limits<int>::min();
    cin>>n>>k;
    for(int i=0; i<n; i++) cin>>w[i];
    l=0;
    r=numeric_limits<int>::min();
    m=(n+k-1)/k;
    weight=0;
    for(int i=0; i<n; i++) {
        l+=w[i];
        wm=max(wm, w[i]);
        if(i%m==0) {
            r=max(r, weight);
            weight=w[i];
        } else {
            weight+=w[i];
        }
    }
    r=max(r, weight);
    l=max((l+n-1)/n, wm);
    
    bool f;
    while(r>l) {
        m=(l+r)/2;
        truck=weight=0;
        f=true;
        for(int i=0; i<n; i++) {
            if(weight+w[i]<=m) weight+=w[i];
            else {
                truck++;
                if(truck>=k) {
                    f=false;
                    break;
                }
                weight=w[i];
            }
        }
        if(f) r=m;
        else l=m+1;
    }
    cout<<r<<'\n';
    return 0;
}