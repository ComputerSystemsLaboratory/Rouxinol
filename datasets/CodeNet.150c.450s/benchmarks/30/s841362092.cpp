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
        int a;
        cin >> a;
        v.push_back(a);
    }
    int c = 0;
    for(int i = 0;i < n;i++)
    {
        int minj = i;
        for(int j = i;j < n;j++)
        {
            if(v.at(j) < v.at(minj))
            {
                minj = j;
            }
        }
        if(i != minj)
        {
            int t = v.at(i);
            v.at(i) = v.at(minj);
            v.at(minj) = t;
            c++;
        }
    }
    for(int i = 0;i < n;i++)
    {
        cout << v.at(i);
        if(i + 1 != n)
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