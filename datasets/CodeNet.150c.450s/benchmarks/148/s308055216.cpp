#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;

int main()
{
    int N ;
    cin >> N ;
    string s[4] = {"AC" , "WA" , "TLE" , "RE"} ;
    int c[4] = {0,0,0,0};
    while(N--)
    {
        string x ;
        cin >> x ;
        if(x == s[1])
            c[1]++ ;
        else if(x == s[0])
            c[0]++ ;
         else if(x == s[2])
            c[2]++ ;
        else if(x == s[3])
            c[3]++ ;
    }
    cout << s[0] << " x " << c[0] << endl;
    cout << s[1] << " x " << c[1] << endl;
    cout << s[2] << " x " << c[2] << endl;
    cout << s[3] << " x " << c[3] << endl;
    return 0 ;
}
