#include <iostream>
using namespace std;
int main()
{
    int n;
    string s;
    int count[4] = {};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "AC") count[0] += 1;
        if (s == "WA") count[1] += 1;
        if (s == "TLE")count[2] += 1;
        if (s == "RE") count[3] += 1;
    }
    cout << "AC x " << count[0] << endl
         << "WA x " << count[1] << endl
         << "TLE x "<< count[2] << endl
         << "RE x " << count[3] << endl;
    return 0;
}