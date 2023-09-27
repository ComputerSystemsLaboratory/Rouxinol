#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int k,u;
    int v;
    int table[200][200]={};
    for(int i=0;i<n;i++){
        cin >> u;
        cin >> k;
        for(int j=0;j<k;j++){
            cin >> v;
            table[u-1][v-1]=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j)cout << " ";
            cout << table[i][j];
        }
        cout << endl;
    }

    return 0;
}

