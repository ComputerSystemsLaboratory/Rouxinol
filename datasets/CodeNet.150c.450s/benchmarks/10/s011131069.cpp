#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>


using namespace std;


int main() {
    const string separator = "####################";
    int n;
    cin >> n;

    int house[4][3][10] {};
    
    for (int i = 0, b, f, r, v; i < n; ++i)
    {
        cin >> b >> f >> r >> v;
        house[b - 1][f - 1][r - 1] += v;
    }

    
    for (const auto& b : house)
    {
        for (const auto& f : b)
        {
            for (const auto& r : f)
            {
                cout << " " << r;
            }
            cout << endl;
        }
        if(b != house[3])
            cout << separator << endl;
    }

    return 0;
} 