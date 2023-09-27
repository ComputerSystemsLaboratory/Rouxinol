#include <iostream>
using namespace std;

struct Pair
{
    int pos;
    int dis;
};

int main() {
    int n, m;
    while(cin >> n >> m && n != 0)
    {
        int last_p = 0;
        Pair set[n];
        for(int i = 0;i<n;i++)
            cin >> set[i].dis >> set[i].pos;
        for(int i = 0; i< n; i++)
            for(int j = i+1; j < n; j++)
            {
                if(set[i].pos < set[j].pos)
                {
                    Pair rem = set[i];
                    set[i] = set[j];
                    set[j] = rem;
                }
            }
        
        for(int i = 0; i<n;i++)
        {
            if(m >= set[i].dis)
                m -= set[i].dis;
            else if(m < set[i].dis)
            {
                set[i].dis -= m;
                m = 0;
                last_p += set[i].dis * set[i].pos;
            }
        }
        cout << last_p << endl;
    }
        
    return 0;
}