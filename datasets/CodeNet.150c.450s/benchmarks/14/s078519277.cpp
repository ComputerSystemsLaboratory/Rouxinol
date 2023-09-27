#include <bits/stdc++.h>
using namespace std;


int main(int argc, char* argv[])
{
    int t;
    cin >> t;
    int x = 0;
    for (int i = 1; i < t+1; i++)
    {
        x = i;
        if(x%3 == 0)
        {
            cout << " " << i;
            continue;
        }else
        {
            while(x)
            {
                if(x%10 == 3)
                {
                    cout << " " << i;
                    break;
                }
                x /= 10;
            }
        }
    }
    cout << endl;

    return 0;
}

