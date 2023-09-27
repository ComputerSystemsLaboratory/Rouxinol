#include <iostream>
#include <array>
#include <cmath>
using namespace std;

int main() {
    array<long long, 31> stairs{};
    {
        stairs[0] = 1;
        for (auto step = 0; step <= 30; step++)
            for (auto walk = 1; walk <= 3; walk++) 
                if (step + walk <= 30)
                    stairs[step + walk] += stairs[step];
    }
    int n;
    while (cin >> n, n)
        cout << ceil(static_cast<double>(stairs[n]) / 3650.) << endl;
    return 0;
}