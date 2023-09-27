#include <iostream>
#include <string>
using namespace std;
int main(void){
    int n,m,l;
    cin >> n >> m >> l;
    int A[100][100]={};int B[100][100];long c[100][100]={};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> A[i][j];
        }
    }
    for(int j=0;j<m;j++){
        for(int k=0;k<l;k++){
            cin >> B[j][k];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            for(int k=0;k<m;k++){
                c[i][j]+=A[i][k]*B[k][j];
            }
            cout << c[i][j];
            if(j!=l-1){
                cout << " ";
            }
        }
        cout << endl;
    }
}
