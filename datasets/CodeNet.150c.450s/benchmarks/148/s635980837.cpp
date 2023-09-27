#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    int n,br1=0,br2=0,br3=0,br4=0;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> s;
        if(s[0]=='A')
            br1++;
        else if(s[0]=='W')
            br2++;
        else if(s[0]=='T')
            br3++;
        else
            br4++;
    }
    cout << "AC x " << br1 << '\n';
    cout << "WA x " << br2 << '\n';
    cout << "TLE x " << br3 << '\n';
    cout << "RE x " << br4 << '\n';
}
