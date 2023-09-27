#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> num(10001, 0);
    int n, i, res;
    cin >> n;
    for (int x=1 ; x<=100 ; x++)
    {
        for (int y=1 ; y<=100 ; y++)
        {
            if (x*x + y*y + x*y > n)
                break;
            for (int z=1 ; z<=100 ; z++)
            {
                res = x*x + y*y + z*z + x*y + x*z + y*z;
                if (res > n)
                    break;
                num[res]++;
            }
        }
    }
    for (i=1 ; i<=n && i<num.size() ; i++)
    {
        cout << num[i] << endl;
    }
    return 0;
}
