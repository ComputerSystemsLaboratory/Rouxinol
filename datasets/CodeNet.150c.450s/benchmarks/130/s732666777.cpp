#include <cstdio>
#include <iostream>
using namespace std;


int main(){
    int a[101][101], b[101], n,m;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    
    for(int i=0;i<m;i++)
        cin >> b[i];
    
    for(int i=0;i<n;i++){
        int ans = 0;
        for(int j = 0;j < m;j++)
            ans += a[i][j] * b[j];
        cout << ans << endl;
    }
    return 0;
}

