#include <bits/stdc++.h>
using namespace std;

int a[5][4][11];
int main()
{
    ios::sync_with_stdio(false);
    int a1,a2,a3,a4,n;
    cin>>n;
    memset(a,0,sizeof a);
    for(int i=0;i<n;i++){
        cin>>a1>>a2>>a3>>a4;
        a[a1][a2][a3]+=a4;
    }
    for(int i=1;i<5;i++){
        for(int j=1;j<4;j++){
            for(int k=1;k<11;k++)
                cout<<" "<<a[i][j][k];
            cout<<endl;
        }
        if(i!=4) cout<<"####################"<<endl;
    }
    return 0;
}

