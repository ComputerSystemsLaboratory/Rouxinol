#include <iostream>

using namespace std;

int S[10000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>S[i];
    }
    int c=0;
    int q, t;
    cin>>q;
    for(int i=0; i<q; i++) {
        cin>>t;
        for(int j=0; j<n; j++) {
            if(S[j]==t) {
                c++;
                break;
            }
        }
    }
    cout<<c<<'\n';
    return 0;
}