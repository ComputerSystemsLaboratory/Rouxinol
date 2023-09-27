#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int in;
    vector<int> v;
    while(cin >> in)
    {
        v.push_back(in);
    }
    sort(v.begin(), v.end(), greater<int>());
    for(int i = 0; i < 3 ; i++)
    {
        cout << v[i] << endl;
    }
}