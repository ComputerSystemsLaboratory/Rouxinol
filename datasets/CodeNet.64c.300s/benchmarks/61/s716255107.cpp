#include <iostream>

using namespace std;

int table[101][101];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int r, c, x;
    cin>>r>>c;
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cin>>x;
            table[i][j]=x;
            table[i][c]+=x;
            table[r][j]+=x;
            table[r][c]+=x;
        }
    }
    for(int i=0; i<=r; i++) {
        cout<<table[i][0];
        for(int j=1; j<=c; j++) {
            cout<<' '<<table[i][j];
        }
        cout<<'\n';
    }
    return 0;
}