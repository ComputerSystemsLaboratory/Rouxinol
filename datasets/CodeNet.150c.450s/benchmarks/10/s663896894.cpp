#include <iostream>
using namespace std;
int main() {
    int n,b,f,r,v,house[4][3][10]={},i,j,k;
    string border(20,'#');
    cin>>n;
    for (i=0;i<n;i++) {
        cin >> b >> f >> r >> v;
        house[b-1][f-1][r-1] += v;
    }
    for (i=0;i<4;i++) {
        for (j=0;j<3;j++) {
            for (k=0;k<10;k++) {
                cout << " " << house[i][j][k];
            }
            cout << endl;
        }
        if (i < 3) cout << border << endl;
    }
    return 0;
}