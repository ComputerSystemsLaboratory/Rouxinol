#include <iostream>
#include <vector>

using namespace std;

int main()
{    
    int a;
    cin >> a;
    int i = 1;
    while(1)
    {
        int x = i;
        if(x % 3 == 0)
        {
            cout << " " << i;
        }
        else
        {
            while(1)
            {
                if(x % 10 == 3)
                {
                    cout << " " << i;
                    break;
                }
                else
                {
                    x /= 10;
                    if(!x)
                    {
                        break;
                    }
                }
            }
        }

        if(++i > a)
        {
            break;
        }
    }
    cout << endl;

     return 0;
}