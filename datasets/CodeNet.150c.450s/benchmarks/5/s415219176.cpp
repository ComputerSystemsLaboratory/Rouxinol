#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v(n);

    for(auto &x : v) cin >> x;

    for(auto it = v.crbegin(); it != v.crend(); ++it)
        cout << *it << (((it+1)==v.crend()? "" : " "));
    cout << endl;

    return 0;
}

