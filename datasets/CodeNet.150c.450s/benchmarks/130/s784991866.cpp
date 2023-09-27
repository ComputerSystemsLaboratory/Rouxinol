#include <iostream>

using namespace std;

int a[100][100];
int b[100];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<m; i++) {
        cin>>b[i];
    }
    int ans;
    for(int i=0; i<n; i++) {
        ans=0;
        for(int j=0; j<m; j++) {
            ans+=a[i][j]*b[j];
        }
        cout<<ans<<'\n';
    }
    return 0;
}