#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int ignore;
    cin >> ignore;
    int fi;
    int se;
    int th;
    vector<int> v;

    while(cin >> fi >> se >> th)
    {
        v.push_back(fi);
        v.push_back(se);
        v.push_back(th);
        sort(v.begin(), v.end(), greater<int>());
        if(v[0] * v[0] == v[1] * v[1] + v[2] * v[2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        v.clear();
    }
}