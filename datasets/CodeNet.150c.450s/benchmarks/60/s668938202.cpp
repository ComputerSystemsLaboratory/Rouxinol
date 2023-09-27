#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    
    vector<vector<int>> a(n,vector<int> (n,0));
    
    vector<vector<int>> v(n,vector<int> (n));
    for(int i=0;i<n;i++){
        int u,k;
        cin>>u>>k;
        for(int j=0;j<k;j++){
            int m;
            cin>>m;
            a.at(u-1).at(m-1)=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            cout<<a.at(i).at(j)<<" ";
        }
        cout<<a.at(i).at(n-1)<<endl;
    }
}
