#include <iostream>
using namespace std;

int main()
{
    
    int A[100][100]{0};
    
    int n, m;
    int a;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a;
            A[i][j] = a;
        }
    }

    int b[100] { 0 };
    int bn;

    for(int i=0; i<m; ++i){
        cin >> bn;
        b[i] = bn;
    }
    
    int c[100]{0};
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            c[i] = (A[i][j] * b[j]) + c[i];
        }
    }
    
    for(int i=0; i<n; ++i){
        cout << c[i] << endl;
    }
    
    return 0;
}

