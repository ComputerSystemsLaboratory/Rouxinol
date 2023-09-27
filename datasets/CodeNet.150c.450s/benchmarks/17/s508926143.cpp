#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int val;
    vector<int> is;
    for (int i = 0; i < 5 && scanf("%d", &val); i++) 
        is.push_back(val);

    sort(is.begin(), is.end());
    for (int i = is.size() - 1; i > 0; i--)
        cout << is[i] << " ";
    cout << is[0] << endl;
}