#include <iostream>
using namespace std;
int main(void){
    int n,m;
    cin >> n>>m;
    
    int A[n][m];
    int b[m][1];
    int result[n][1];
    
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        A[i][j]=0;
        b[j][0]=0;
        result[i][0]=0;
    }

    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        int v;
        cin >> v;
        A[i][j]=v;
    }

    for(int j=0;j<m;j++){
        int v;
        cin >> v;
        b[j][0]=v;
    }


    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            result[j][0]+=A[j][i]*b[i][0];
        }
    }
    
    for(int j=0;j<n;j++){
        cout << result[j][0] << endl;
    }

}