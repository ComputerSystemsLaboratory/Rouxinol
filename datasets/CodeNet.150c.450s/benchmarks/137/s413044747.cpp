#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#define REP(i, n) for(i = 0; i < n; i++)
using namespace std;
int main()
{
    set<string> D;
    int n, i;
    string str1, str2;
    cin >> n;
    REP(i, n) 
    {
        cin >> str1 >> str2;
        if(str1 == "insert") D.insert(str2);
        else
        {
            if(D.find(str2) == D.end()) cout << "no";
            else cout << "yes";
            cout << endl;
        }
    }
}