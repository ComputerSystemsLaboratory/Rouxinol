#include <iostream>
#include <ios>
using namespace std;

bool mat[101][101] = {{false}};

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int m = 0; m != n; ++m){
        int i = 0, k = 0;
        cin >> i;
        cin >> k;
        while (k--){
            int j = 0;
            cin >> j;
            mat[i - 1][j - 1] = true;
        }
    }
    
    for (int i = 0; i != n; ++i){
        cout << mat[i][0];
        for (int j = 1; j != n; ++j){
            cout << ' ' << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}