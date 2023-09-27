#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>


using namespace std;



int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> A(n, vector<int>(m, 0));

    for (int row = 0; row < n; ++row)
        for (int col = 0; col < m; ++col)
            cin >> A[row][col];

    vector<int> x(m, 0);

    for (int i = 0; i < m; ++i)
        cin >> x[i];
    

    vector<int> ans(n, 0);

    for (int row = 0; row < n; ++row)
        for (int col = 0; col < m; ++col)
            ans[row] += A[row][col] * x[col];

    for (auto a : ans)
        cout << a << endl;

    
    return 0;
} 