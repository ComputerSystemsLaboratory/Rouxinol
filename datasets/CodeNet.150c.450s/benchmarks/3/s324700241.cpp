#include <bits/stdc++.h>

using namespace std;

char s[1000];

int main()
{
    cin >> s;
    int len = strlen(s), q, a, b;
    cin >> q;
    while(q--)
    {
        string com;
        cin >> com >> a >> b;
        if(com == "replace")
        {
            string rep;
            cin >> rep;
            for(int i = a;i <= b;i++)
            {
                s[i] = rep[i - a];
            }
        }
        if(com == "reverse")
        {
            while(a <= b)
            {
                swap(s[a], s[b]);
                a++;b--;
            }
        }
        if(com == "print")
        {
            for(int i = a;i <= b;i++)
                cout << s[i];
            cout << '\n';
        }
    }
    return 0;
}

