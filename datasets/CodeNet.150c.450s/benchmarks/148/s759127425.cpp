///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    ll ac=0,wa=0,re=0,tl=0;
    while(t--)
    {
        string s;
        cin >> s;
        if(s=="AC")
            ac++;
        else if(s=="TLE")
            tl++;
        else if(s=="WA")
            wa++;
        else
            re++;

    }
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tl << endl;
    cout << "RE x " << re << endl;

}

