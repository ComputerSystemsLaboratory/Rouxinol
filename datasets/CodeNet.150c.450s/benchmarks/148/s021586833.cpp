#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> c(4, 0);
    string s;
    for (int i=0; i<n; i++) {
        cin>>s;
        if (s == "AC") c[0]++;
        else if (s == "WA") c[1]++;
        else if (s == "TLE") c[2]++;
        else c[3]++;
    }
    cout << "AC x " << c[0] << '\n';
    cout << "WA x " << c[1] << '\n';
    cout << "TLE x " << c[2] << '\n';
    cout << "RE x " << c[3] << '\n';
    return 0;
}