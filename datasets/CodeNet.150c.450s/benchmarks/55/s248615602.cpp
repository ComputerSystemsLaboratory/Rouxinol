#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    while(1)
    {
        int n = 0;
        while(1)
        {
            char c;
            cin.get(c);
            if(c == '\n')
            {
                break;
            }
            n += atoi(&c);
        }
        if(n != 0)
        {
            cout << n << endl;
        }
        else
        {
            return 0;
        }
    }

}