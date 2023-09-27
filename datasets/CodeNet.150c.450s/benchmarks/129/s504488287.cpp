#include <bits/stdc++.h>

using namespace std;

int main(){
    int r,c;
    cin >> r >> c;
    vector<vector<int> > list(r+1,vector<int>(c+1,0));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> list[i][j];
            list[i][c]+=list[i][j];
            list[r][j]+=list[i][j];
        }
        list[r][c]+=list[i][c];
    }
    for(int i=0;i<=r;i++){
        for(int j=0;j<=c;j++){
            cout << list[i][j];
            if(j!=c)cout << " ";
        }
        cout << endl;
    }

    return 0;
}