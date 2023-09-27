#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    char c;
    int l[26] = {};
    while(cin >> c)
    {
        if(isupper(c))
        {
            c = tolower(c);
        }
        ++l[c - 'a'];
    }
    for(int i = 0;i < 26;i++)
    {
        cout << char('a' + i) << " : " << l[i] << endl;
    }
    return 0;
}