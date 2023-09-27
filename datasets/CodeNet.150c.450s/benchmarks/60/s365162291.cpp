#include <bits/stdc++.h>
using namespace std;

int main() {

    int n , u , k , s;
    cin>> n ;
    vector<vector<int> > v(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
    cin >> u >> k;
    for(int r=0;r<k;r++){
        cin >> s;
        v[u-1][s-1] = 1;

    }
    }
    for(int i=0;i<n;i++){

        for(int r=0;r<n;r++){
            cout << v[i][r] ; 
            if(r==n-1){}
            else {cout << " " ;}
        }
        cout << endl;
    }
}

