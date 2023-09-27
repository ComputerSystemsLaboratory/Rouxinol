#include <iostream>
#include <vector>
using namespace std;

void out(vector<int> &v)
{
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
}

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
    out(v);
    for(int i = 1;i < n;i++)
    {
        int it = i;
        while(v.at(it) < v.at(it -1))
        {
            int t = v.at(it - 1);
            v.at(it - 1) = v.at(it);
            v.at(it) = t;
            it--;
            if(it == 0)
            {
                break;
            }
        }
        out(v);
    }
}