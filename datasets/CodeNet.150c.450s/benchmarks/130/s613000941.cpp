#include <iostream>
using namespace std;
 
int main() {
    int n,m;
    cin >> n >> m;

    int a[100][100] = {};
    int b[100]={};
    int ans[100]={};
    int tmp[100]={};

    for (int i = 0; i < n; ++i){
        for (int j = 0; j<m; ++j){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; ++i){
        cin >> b[i];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j<m; ++j){
            tmp[j] = a[i][j] * b[j];
            ans[i] += tmp[j];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << ans[i] << endl;
    }

    return 0;
}