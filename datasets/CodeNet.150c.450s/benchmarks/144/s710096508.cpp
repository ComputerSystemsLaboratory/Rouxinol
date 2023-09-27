#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m,l;
    cin >> n >> m >> l;
    vector<vector<long long> > a(n+1,vector<long long>(m+1));
    vector<vector<long long> > b(m+1,vector<long long>(l+1));
    vector<vector<long long> > c(n+1,vector<long long>(l+1,0));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> a[i][j];
        }
    }
    for(int i=1; i<=m; i++){
        for(int j=1; j<=l; j++){
            cin >> b[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=l; j++){
            for(int k=1; k<=m; k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
            if(j!=l) cout << c[i][j] << " ";
            else    cout << c[i][j] << endl;
        }
 
    }
    return 0;
}
