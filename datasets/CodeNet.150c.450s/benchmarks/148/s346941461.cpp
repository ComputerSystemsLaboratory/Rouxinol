#include <iostream>
#include <cstdlib>
#include <list>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main(void)
{
    int64_t N;
    cin >> N;

    map<string, int> m;

    for (int i = 0; i < N; ++i)
    {
        string s;
        cin >> s;
        if (m[s]) ++m[s];
        else m[s] = 1;
    }

    cout << "AC x " << m["AC"] << endl;
    cout << "WA x " << m["WA"] << endl;
    cout << "TLE x " << m["TLE"] << endl;
    cout << "RE x " << m["RE"] << endl;
    
    return 0;
}
