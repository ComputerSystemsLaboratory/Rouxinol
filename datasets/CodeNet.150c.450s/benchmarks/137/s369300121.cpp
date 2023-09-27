#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

unordered_map <string,int> Hash;

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    while(n--)
    {
        string temp,str;
        cin >> temp >> str;
        if(temp=="insert")
            Hash[str]++;
        else if(temp=="find")
        {
            if(Hash[str])
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }
    return 0;
}