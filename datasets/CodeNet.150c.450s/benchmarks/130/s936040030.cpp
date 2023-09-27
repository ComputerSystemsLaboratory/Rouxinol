#include <vector>
#include <iostream>
using namespace std;

template <typename T>
T operator*(const vector<T> &a, const vector<T> &b)
{
    T total = 0;
    auto bi = b.begin();
    for(auto &x : a) 
        total += x * *bi++;
    return total;
}


int main()
{
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> mat(n, vector<int>(m));
    for(auto &row : mat)
        for(auto &elem : row)
            cin >> elem;

    vector<int> v(m);
    for(auto &elem : v)
        cin >> elem;

    for(auto &row : mat)
        cout << row * v << '\n';

    return 0;
}


