#include <iostream>
using namespace std;

int main(void){
    int n, m;
    cin >> n >> m;
    
    int *mat;
    mat = new int[n*m];
    
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            cin >> mat[i * m + j];
//            cout << mat[i * m + j];
        }
    }
    
    int *vec;
    vec = new int[m];
    for(j = 0; j < m; j++) cin >> vec[j];
    
    int result;
    for(i = 0; i < n; i++){
        result = 0;
        for(j = 0; j < m; j++){
            result += (mat[i * m + j])*vec[j];
        }
        cout << result << endl;
    }
    
    delete vec;
    delete[] mat;
    mat = 0;
    return 0;
}