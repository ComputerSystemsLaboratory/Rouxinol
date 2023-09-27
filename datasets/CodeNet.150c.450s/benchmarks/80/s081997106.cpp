#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;
    cin >> g;
    cin >> h;
    int S = a + b + c + d;
    int T = e + f + g + h;
    vector<int> v{S,T};
    sort(v.begin(),v.end());
    cout << v[1] << endl;
}