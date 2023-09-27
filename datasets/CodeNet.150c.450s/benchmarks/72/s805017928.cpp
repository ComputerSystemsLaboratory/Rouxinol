#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    while(1)
    {
        char c;
        cin.get(c);
        if(c == '\n')
        {
            cout << endl;
            return 0;
        }
        if(islower(c))
        {
            cout << (char)toupper(c);
        }
        else if(isupper(c))
        {
            cout << (char)tolower(c);
        }
        else
        {
            cout << c;
        }
    }
}