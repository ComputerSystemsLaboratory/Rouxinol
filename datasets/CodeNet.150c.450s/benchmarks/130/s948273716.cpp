#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int g[n][m],l[m],a[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin >> g[i][j];
        a[i]=0;
    }
    for(int i=0;i<m;i++)
        cin >> l[i];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i]+=(g[i][j]*l[j]);
        }
    }
    for(int i=0;i<n;i++)
        cout << a[i] << endl;

    return 0;
}

