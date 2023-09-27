#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int> > mat(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        int u,k;
        cin >> u >> k;
        for(int j=0;j<k;j++){
            int v;
            cin >> v;
            mat.at(u-1).at(v-1)=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << mat.at(i).at(j);
            if(j==n-1) cout << endl;
            else cout << " ";
        }
    }
}
