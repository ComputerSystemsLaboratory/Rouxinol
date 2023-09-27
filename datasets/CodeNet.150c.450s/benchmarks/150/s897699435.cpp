#include <iostream>
#include <ios>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int C[10001] = {0};
    int n = 0;
    cin >> n;
    int a = 0;
    int mina = 10000;
    for (int i = 0; i != n; ++i){
        cin >> a;
        ++C[a];
        if (a < mina) mina = a;
    }
    cout << mina;
    --C[mina];
    for (int i = mina; i != 10001; ++i){
        for (int j = 0; j != C[i]; ++j){
            cout << ' ' << i;
        }
    }
    cout << endl;
    return 0;
}