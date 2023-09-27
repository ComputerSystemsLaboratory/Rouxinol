#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

const int INF = INT_MAX/3;
typedef vector<int> vi;
typedef pair<int,int> pii;

int main(){
    int n;cin>>n;
    vector<pii> p(n+1);
    for(int i=0;i<n;i++) cin>>p[i].first>>p[i].second;

    vector<vi> mat(n+1,vi(n+1,INF));    //mat[i][j] : Mi*...*Mj???????°??????°
    for(int i=0;i<n;i++) mat[i][i] = 0;

    for(int sz=2;sz<=n;sz++){
        /*
         * mat[i][j] = min( mat[i][k]+mat[k+1][j]+Mi.first*Mk+1.first*Mk+1.second )
         */
        for(int i=0;i<=n-sz;i++){
            int j = i + sz - 1;

            for(int k=i;k<=j-1;k++){
                mat[i][j] = min(mat[i][j] , mat[i][k] + mat[k+1][j] + p[i].first * p[k+1].first * p[j].second);
            }
        }
    }
    cout << mat[0][n-1] << endl;
}