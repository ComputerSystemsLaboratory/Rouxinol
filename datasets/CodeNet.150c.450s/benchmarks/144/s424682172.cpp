#include <iostream>

using namespace std;

int a[100][100];
int b[100][100];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, l;
    cin>>n>>m>>l;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<m; i++) {
        for(int j=0; j<l; j++) {
            cin>>b[i][j];
        }
    }
    long long ans;
    for(int i=0; i<n; i++) {
        for(int j=0; j<l; j++) {
            ans=0;
            for(int k=0; k<m; k++) {
                ans+=a[i][k]*b[k][j];
            }
            if(j)cout<<' ';
            cout<<ans;
        }
        cout<<'\n';
    }
    return 0;
}