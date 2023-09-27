#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

int main()
{
    int n, ac = 0, wa = 0, tle = 0, re = 0;
    cin >> n;
    string casos[n];
    for(int i = 0; i < n; i++){
        cin >> casos[i];
        if(casos[i] == "AC")
            ac++;
        if(casos[i] == "WA")
            wa++;
        if(casos[i] == "TLE")
            tle++;
        if(casos[i] == "RE")
            re++;
    }
    cout << "AC x " << ac <<endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;
}