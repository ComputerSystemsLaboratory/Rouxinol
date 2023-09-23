#include <iostream>
using namespace std;

int main() {
    int vec[101][101], b[101], n, m, i, j, sum;

    cin >> n >> m;
    for(i=1;i<n+1;i++){
        for(j=1;j<m+1;j++){
            cin >> vec[i][j];
        }
    }
    for(j=1;j<m+1;j++){
        cin >> b[j];
    }

    for(i=1;i<n+1;i++){
        sum=0;
        for(j=1;j<m+1;j++){
            sum= vec[i][j]*b[j]+sum;
        }
        cout << sum << endl;
    }

    return 0;
}
