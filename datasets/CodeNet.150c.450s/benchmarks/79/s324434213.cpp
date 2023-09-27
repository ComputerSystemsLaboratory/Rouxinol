#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,r;
    while(cin>>n>>r,n||r){
        vector<int>V[2];
        V[0].resize(n);
        for(int i=0;i<n;i++)V[0][i]=n-i;
        int p,c;
        for(int i=0;i<r;i++){
            cin>>p>>c;
            V[(i+1)&1].clear();
            for(int j=p-1;j<p+c-1;j++)
                V[(i+1)&1].push_back(V[i&1][j]);

            for(int j=0;j<p-1;j++)
                V[(i+1)&1].push_back(V[i&1][j]);
            for(int j=p+c-1;j<n;j++)
                V[(i+1)&1].push_back(V[i&1][j]);
           ///for(int j=0;j<n;j++)cout<<V[(i+1)&1][j]<<" ";
           // cout<<endl;
        }
        cout<<V[r&1][0]<<endl;
    }
}