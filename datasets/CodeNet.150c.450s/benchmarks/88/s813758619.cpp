#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    while (1)
    {
        int h, w, dia, ans=30000, s=300, sw, d, dw;
        bool same=false;
        cin>>h>>w;
        if (h==0 && w==0) break;
        dia=h*h+w*w;
        for (int i=1; i<151; i++)
        {
            for (int j=i+1; j<151; j++)
            {
                if (i==h && j==w) continue;
                if (i*i+j*j>dia) if (i*i+j*j<ans) { ans=i*i+j*j; d=i; dw=j; }
                if (i*i+j*j==dia && i>h) { same=true; if (s>i) { s=i; sw=j; } }
            }
        }
        if (same) cout<<s<<' '<<sw<<'\n';
        else cout<<d<<' '<<dw<<'\n';
    }
    return 0;
}

