#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;

int c[100][100];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, t;
    int M[101];
    cin>>n;
    cin>>M[0]>>M[1];
    for(int i=2; i<=n; i++) {
        cin>>t>>M[i];
    }
    for(int l=1; l<n; l++) {
        for(int i=0; i+l<n; i++) {
            int cost=numeric_limits<int>::max();
            for(int j=i+1; j<=i+l; j++) {
                cost=min(cost, c[i][j-1]+M[i]*M[j]*M[i+l+1]+c[j][i+l]);
            }
            c[i][i+l]=cost;
        }
    }
    cout<<c[0][n-1]<<'\n';
}