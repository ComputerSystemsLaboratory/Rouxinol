#include <iostream>
using namespace std;

bool match(string *s1, string *s2, int idx)
{
    for(int i = 0; i < (*s2).length(); i++)
    {
        if((*s1)[(i+idx) % (*s1).length()] != (*s2)[i])
            return false;
    }

    return true;
}

int main()
{
    string s, p;

    getline(cin, s);
    getline(cin, p);

    bool found = false;
    for(int i = 0; i < s.length(); i++)
    {
        if(match(&s, &p, i))
        {
            found = true;
        }
    }

    if(found)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    cout << endl;

    return 0;
}