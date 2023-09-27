#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n, tp = 0, hp = 0;
    cin >> n;
    for (int a = 0; a < n; a++)
    {
        string t, h;
        cin >> t;
        cin >> h;
        if (t < h)hp += 3;
        else if (t>h)tp += 3;
        else tp += 1, hp += 1;
    }
    cout << tp << " " << hp << endl;
    return 0;
}