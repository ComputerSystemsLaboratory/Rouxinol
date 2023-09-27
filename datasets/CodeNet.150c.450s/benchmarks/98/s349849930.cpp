#include <iostream>

using namespace std;

int main()
{
    int n, m, t[110], h[110], ha, ta, a1, a2, best;
    bool ok;
    while (1)
    {
        ha=0; ta=0; ok=false; best=500;
        cin>>n>>m;
        if (n==0 && m==0) break;
        for (int i=0; i<n; i++) { cin>>t[i]; ta+=t[i]; }
        for (int i=0; i<m; i++) { cin>>h[i]; ha+=h[i]; }
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                if (ta-t[i]+h[j]==ha-h[j]+t[i]) { ok=true; if (t[i]+h[j]<best) { a1=t[i]; a2=h[j]; best=a1+a2; } }
            }
        }
        if (!ok) cout<<"-1\n";
        else cout<<a1<<' '<<a2<<'\n';
    }
    return 0;
}

