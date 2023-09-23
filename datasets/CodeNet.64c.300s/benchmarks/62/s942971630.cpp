#include <iostream>
using namespace std;
 int main(){
 int n,m;
 cin >> n >> m;
 int A[100][100];
 int B[100];
 int C[100];
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
          cin >> A[i][j];
        }  
    }
    for(int i=0;i<m;i++){
        cin >> B[i];
    }
    for(int i=0;i<n;i++){
        C[i]=0;
        for(int j=0;j<m;j++){
            C[i]+=A[i][j]*B[j];
        }
    }
    for(int i=0;i<n;i++){
        cout << C[i] << endl;
    }
}
