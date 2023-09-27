
#include<iostream>
using namespace std;

int main() {
    int n,m,l;
    cin >> n >> m >> l;
    int array1[n][m];
    int array2[m][l];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> array1[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            cin >> array2[i][j];
        }
    }
    long array3[n][l];
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            array3[i][j]=0;
            for(int k=0;k<m;k++){
                array3[i][j]+=array1[i][k]*array2[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            if(j==0) cout << array3[i][j];
            else cout << " " << array3[i][j];
        }
        cout << endl;
    }
    return 0;
}

