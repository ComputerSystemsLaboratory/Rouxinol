#include <iostream>
#include <string.h>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    int n,c = 0,w = 0,t = 0,r = 0;
    cin >> n;
    vector<string>v(n);
    vector<string> :: iterator it;

    for(it = v.begin();it != v.end();it++)
        cin >> *it;

    for(it = v.begin();it != v.end();it++)
    {
        if(*it == "AC")
        c++;
        else if(*it == "WA")
            w++;
        else if(*it == "TLE")
            t++;
        else if( *it  == "RE")
            r++;
    }
    cout << "AC x " << c << endl;
    cout << "WA x " << w << endl;
    cout << "TLE x " << t << endl;
    cout << "RE x " << r << endl;



}
