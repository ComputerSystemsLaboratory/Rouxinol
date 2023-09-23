#include <iostream>

using namespace std;

int house[4][3][10];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, b, f, r, v;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>b>>f>>r>>v;
        house[b-1][f-1][r-1]+=v;
    }
    for(int i=0; i<4; i++) {
        if(i) cout<<"####################\n";
        for(int j=0; j<3; j++) {
            for(int k=0; k<10; k++) {
                cout<<' '<<house[i][j][k];
            }
            cout<<'\n';
        }
    }
    return 0;
}