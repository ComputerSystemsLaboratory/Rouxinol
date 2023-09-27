#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m,l;
    cin >> n >> m >> l;

    vector< vector<long long int> > a;
    vector<  vector<long long int> > b;

    a.resize(n);
    for (int i=0;i<n;i++){
        a[i].resize(m);
        for (int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }

    b.resize(m);
    for (int i=0;i<m;i++){
        b[i].resize(l);
        for (int j=0;j<l;j++){
            cin >> b[i][j];
        }
    }

    long long int ans =0;
    for (int i=0;i<n;i++){
        for (int k=0;k<l;k++){
            ans = 0;
            for (int j=0;j<m;j++){
                //cout << i << j << k << endl;
                ans += a[i][j] * b[j][k];
            }
            if (k>0){cout << " ";}
            cout << ans;
            if (k==l-1){cout << endl;}
        }
    }

    return 0;
}



