#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int z[1001][1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string x,y;
    int n;
    cin>>n;
    while(n--) {
        cin>>x>>y;
        int lx=x.size(), ly=y.size();
        for(int i=0; i<=lx; i++) z[i][0]=0;
        for(int i=0; i<=ly; i++) z[0][i]=0;
        for(int i=1; i<=lx; i++) {
            for(int j=1; j<=ly; j++) {
                if(x[i-1]==y[j-1]) z[i][j]=z[i-1][j-1]+1;
                else z[i][j]=max(z[i][j-1],z[i-1][j]);
            }
        }
        cout<<z[lx][ly]<<'\n';
    }
    return 0;
}