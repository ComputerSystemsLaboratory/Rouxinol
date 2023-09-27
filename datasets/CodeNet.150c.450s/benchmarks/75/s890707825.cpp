#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ui unsigned int
#define ull unsigned long long

int main(void)
{
    int h;
    while (cin >> h)
    {
        vector<int> node;
        for (int i = 0 ; i < h ; i++)
        {
            int tmp;
            cin >> tmp;
            node.push_back(tmp);
        }
        make_heap(node.begin(), node.end());
        for (int i = 0 ; i < h ; i++)
        {
            cout << " " << node[i];
        }
        cout << endl;
    }
    return 0;
}
