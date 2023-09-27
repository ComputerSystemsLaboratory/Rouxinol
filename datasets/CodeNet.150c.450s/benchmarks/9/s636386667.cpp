#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    while(1)
    {
            string t;
            cin >> t;
            if(t == "-")
            {
                return 0;
            }
            int m ;
            cin >> m;
            for(int i = 0;i < m;i++)
            {
                int h;
                cin >> h;
                string u = t.substr(0,h);
                t.erase(t.begin(),t.begin() + h);
                t += u;
            }
            cout << t << endl;
    }
}