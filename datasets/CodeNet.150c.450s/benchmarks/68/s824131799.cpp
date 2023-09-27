#include <iostream>
#include <vector>
#include <stdlib.h> //for exit
#include <algorithm> //for sort...etc
#include <numeric> //for accumulate
using namespace std;

int main()
{
    while(1)
    {
        int n,score=10000000;
        vector<int> a;
        cin >> n;
        if(n == 0) exit(0);
        for(int i = 0 ; i < n; i++)
        {
            int tpn;
            cin >> tpn;
            a.push_back(tpn);
        }

        for(int i = 0; i < n; i++)
        {
            for(int k = 0; k < n; k++)
            {
                int tpscore = abs(a[i] - a[k]);
                if((tpscore < score) && (i!=k))
                {
                    score = tpscore;
                }
            }
        }

        cout << score << endl;
    }
}
