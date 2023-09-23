#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    int a, b, c, ans;
    while(cin>>n>>x) {
        if(n==0 && x==0) break;
        ans=0;
        for(a=1; a<n; a++) {
            for(b=a+1; b<n; b++) {
                c=x-a-b;
                if(b<c && c<=n) ans++;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}