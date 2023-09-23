#include <iostream>
using namespace std;
 
int main(){
    int n, m;
    cin >> n >> m;
    int a[100][100] = {};
    int b[100] = {};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }

    for(int j=0;j<m;j++){
        cin >> b[j];
    }

    int tmp;
    for(int j=0;j<n;j++){
        tmp = 0;
        for(int i=0;i<m;i++){
            tmp += a[j][i] * b[i];
        }
        cout << tmp << endl;
    }

}
