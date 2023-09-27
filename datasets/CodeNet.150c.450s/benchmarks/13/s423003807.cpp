#include "bits/stdc++.h"
using namespace std;
int main(){
    string s,p;
    cin >> s >> p;
    int i,j,n,m;
    n=s.length();
    m=p.length();
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(s.at((i+j)%n)!=p.at(j))break;
            if(j==m-1) j++;
       }
        if(j==m+1) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
