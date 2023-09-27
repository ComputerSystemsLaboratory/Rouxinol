#include <iostream>
using namespace std;
 
int main(){
    int n, m, l;
    int a[100][100] = {};
    int b[100][100] = {};
    long int c[100][100] = {};
    cin >> n >> m >> l;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            cin >> b[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            for(int k=0;k<m;k++){
                c[i][j] += a[i][k] * b[k][j];
            }
            cout << c[i][j];
            if(j<l-1) cout << " "; 
        }
        cout << endl;
    }
}
