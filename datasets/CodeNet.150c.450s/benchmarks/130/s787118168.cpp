#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int x[n][m];
    int y[m];
    for(int i=0;i<n;i++){
        for (int j=0; j<m; j++) {
            cin >> x[i][j];
        }
    }
    for(int k=0;k<m;k++){
        cin >> y[k];
    }
    
    for(int s=0; s<n; s++){
        int sum =0;
        for (int t=0; t<m; t++) {
            sum += x[s][t] * y[t];
        }
        cout << sum << endl;
    }
}
