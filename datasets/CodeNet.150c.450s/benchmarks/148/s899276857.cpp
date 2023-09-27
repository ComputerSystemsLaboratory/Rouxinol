#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,AC=0,WA=0,TLE=0,RE=0;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        string str;
        cin >> str;
        if(str=="AC") AC++;
        if(str=="WA") WA++;
        if(str=="TLE") TLE++;
        if(str=="RE") RE++;
    }
    cout << "AC x " << AC << endl << "WA x " << WA << endl << "TLE x " << TLE << endl << "RE x " << RE << endl;
}
