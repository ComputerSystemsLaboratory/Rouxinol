#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, tmp, i;
    vector<int> x;
    cin >> m;
    for(i = 0; i <m; i++){
        cin >> tmp;
        x.push_back(tmp);
    }
    i--;
    cout << x[i];
    for(i-- ; i >= 0; i--)
        cout << ' ' << x[i];
    cout << endl;
}