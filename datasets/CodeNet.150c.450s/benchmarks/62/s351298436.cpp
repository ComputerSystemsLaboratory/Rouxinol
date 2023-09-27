// Example program
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;
    vector<int> v{a,b,c};
    sort(v.begin(),v.end());
    cout << v[0] << " " << v[1] << " " << v[2] << endl;
}