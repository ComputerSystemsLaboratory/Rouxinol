#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    vector<vector<int>> A(a,vector<int>(b,0));

    for (int c = 0; c < a; ++c) {
        for (int d = 0; d < b; ++d) {
            cin >> A.at(c).at(d);
        }
    }

    vector<int> B(b,0);
    for (int e = 0; e < b; ++e) {
        cin >> B.at(e);
    }

    vector<int> Result(a,0);
    for (int f = 0; f < a; ++f) {
        int temp = 0;
        for (int g = 0; g < b; ++g) {
            temp += A.at(f).at(g) * B.at(g);
        }
        Result.at(f) = temp;
    }

    for (int i = 0; i < a; ++i) {
        cout << Result.at(i);
        if(i != a)
            cout << endl;
    }

    return 0;
}