#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    int n;
    cin >> s >> n;
    for(int i = 0;i < n;i++)
    {
        string o;
        cin >> o;
        if(o == "reverse")
        {
            int b,e;
            string r;
            cin >> b >> e;
            r = s.substr(b,e - b + 1);
            reverse(r.begin(),r.end());
            s.replace(b,r.length(),r);
        }
        else if(o == "replace")
        {
            int b,e;
            string r;
            cin >> b >> e >> r;
            s.replace(b,r.length(),r);
        }
        else
        {
            int b,e;
            cin >> b >> e;
            string r = s.substr(b,e - b + 1);
            cout << r << endl;
        }
    }
}