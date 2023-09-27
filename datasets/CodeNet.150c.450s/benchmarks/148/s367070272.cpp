#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define ins insert
#define vi vector<int>
const int mxN=1e6;

int main()
{
    int n;
    cin >> n;
    int ans[4]={};
    while(n--)
    {
        string s;
        cin >> s;
        if(s=="AC")
            ans[0]++;
        if(s=="WA")
            ans[1]++;
        if(s=="TLE")
            ans[2]++;
        if(s=="RE")
            ans[3]++;
    }
    cout << "AC x " << ans[0] << "\n";
    cout << "WA x " << ans[1] << "\n";
    cout << "TLE x " << ans[2] << "\n";
    cout << "RE x " << ans[3] << "\n";
}