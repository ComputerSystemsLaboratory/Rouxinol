#include <iostream>

using namespace std;

int main()
{
    while(1)
    {
        int n,x;
        cin >> n >> x;
        if(n == 0 && x == 0)
        {
            return 0;
        }
        int c = 0;
        for(int i = 1;i < n + 1;i++)
        {
            for(int j = 1;j < n + 1;j++)
            {
                for(int k = 1;k < n + 1;k++)
                {
                    if((i + j + k) == x && i < j && j < k)
                    {
                        c++;
                    }
                }
            }
        }
        cout << c << endl;
    }
}