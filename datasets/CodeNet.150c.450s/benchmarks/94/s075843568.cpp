#include <iostream>
#include <cmath>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0;i < n;i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }
    bool f = true;
    int c = 0;
    while(f)
    {
        f = false;
        for(int i = 1;i < v.size();i++)
        {
            if(v.at(i) < v.at(i - 1))
            {
                int t = v.at(i - 1);
                v.at(i -1) = v.at(i);
                v.at(i) = t;
                f = true;
                c++;
            }
        }
    }
    for(int i = 0;i < v.size();i++)
    {
        cout << v.at(i);
        if(i + 1 != v.size())
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }
    cout << c << endl;
}