#include <cstdio>
#include <string>
#include <map>
#include <iostream>

using namespace std;

int maxlen = 0, mode = 0;
map<string,int> mp;

int main()
{   
    string len_key, mode_key, s2;
    int m = 9;
    while( cin >> s2 )
    {
        mp[s2]++;
        if( mode < mp[s2] )
        {
            mode = mp[s2];
            mode_key = s2;
        }
        if( maxlen < s2.size() )
        {
            maxlen = s2.size();
            len_key = s2; 
        } 
    }

    cout << mode_key << ' ' << len_key << '\n';
    return 0;
}

