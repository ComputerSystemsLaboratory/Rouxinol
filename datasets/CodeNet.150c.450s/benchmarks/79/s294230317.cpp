#include <iostream>
#include <vector>
 
using namespace std;
 
void solve()
{
    int n, r;
    while(cin >> n >> r, n || r)
    {
        vector<int> Vec(n);
        for(int i = 0; i < n; ++i)
        {
            Vec[i] = n - i;
        }
        while(r--)
        {
            int p, c;
            cin >> p >> c;
            vector<int> VecBuf = Vec;
            int pos = 0;
            for(int i = p - 1; i < p + c - 1; ++i)
            {
                Vec[pos] = VecBuf[i];
                ++pos;
            }
            for(int i = 0; i < p - 1; ++i)
            {
                Vec[pos] = VecBuf[i];
                ++pos;
            }
            // for(int i = p + c - 1; i < n; ++i)
            // {
            //     Vec[pos] = VecBuf[i];
            //     ++pos;
            // }
        }
        cout << Vec[0] << endl;
    }
}
 
int main()
{
    solve();
    return(0);
}