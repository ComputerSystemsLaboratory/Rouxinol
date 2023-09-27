#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int n;
long long a[105][105];
int in[105][2];

int main()
{
    memset(a,0,sizeof(a));
    cin>>n;
    int i;
    for(i=0;i<n;i++){
        cin>>in[i][0]>>in[i][1];
    }
    for(i=1;i<n;i++){
        int j=0;
        for(j=0;j<n-i;j++){
            int k;
            for(k=0;k<i;k++){
                long long aa=a[j][j+k]+a[j+k+1][j+i]+in[j][0]*in[j+k][1]*in[j+i][1];
                if(a[j][j+i]==0)a[j][j+i]=aa;
                else a[j][j+i]=min(a[j][j+i],aa);
            }
        }
    }
    cout<<a[0][n-1]<<endl;
    return 0;
}