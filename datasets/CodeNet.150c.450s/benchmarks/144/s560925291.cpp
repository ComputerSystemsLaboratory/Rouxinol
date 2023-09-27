#include <iostream>
using namespace std;

int main(){
    long a[105][105], b[105][105], c[105][105]= {{0}};
    int  n, m, l;
    
    cin >> n >> m >> l;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    for(int j = 1; j <= m; j++){
        for(int k = 1; k <= l; k++){
            cin >> b[j][k];
        }
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= l; j++){
            for(int k = 1; k <= m; k++){
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= l; j++){
                if(j == 1)  cout << c[i][j];
                else    cout << " " << c[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
