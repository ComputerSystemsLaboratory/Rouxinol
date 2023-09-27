#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x1=0, x2=0, x3=0, x4=0;
    cin >> n;
    string s;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        if(s == "AC")
            x1++;
        else if(s == "WA")
            x2++;
        else if(s == "TLE")
            x3++;
        else
            x4++;
    }
    cout << "AC x " << x1 <<endl;
    cout << "WA x " << x2 <<endl;
    cout << "TLE x " << x3 <<endl;
    cout << "RE x " << x4 <<endl;

    return 0;
}
