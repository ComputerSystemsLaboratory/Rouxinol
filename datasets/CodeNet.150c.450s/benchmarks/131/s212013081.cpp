#include <bits/stdc++.h>

using namespace std;

int next(int a, int l)
{
    vector<char> v;
    while(a)
    {
        v.push_back(char('0' + a % 10));
        a /= 10;
    }
    while(v.size()!=l) v.push_back('0');
    sort(v.begin(), v.end());
    int x, y;
    istringstream f(string(v.begin(), v.end())), b(string(v.rbegin(), v.rend()));
    f >> x;
    b >> y;
    return y - x;
}

int main()
{
    int a, l;
    while(cin >> a >> l, a|l)
    {
        map<int, int> map;
        map[a] = 0;
        for(int i=1; ; i++)
        {
            a = next(a, l);
            if(map.find(a) != map.end())
            {
                cout << map[a] << " "  << a << " " << i - map[a] << endl;
                break;
            }
            map[a] = i;
        }
    }
}