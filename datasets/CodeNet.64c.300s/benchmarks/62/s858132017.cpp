#include<iostream>
using namespace std;
int main(){
    int n,m,i,j;
    int A[100][100]={{}};
    int b[100]={};
    cin >>n >>m;
    int a;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a;
            A[i][j]=a;
        }
    }
    for(j=0;j<m;j++){
        int c;
        cin>>c;
        b[j]=c;
    }
    for(i=0;i<n;i++){
        int x=0;
        for(j=0;j<m;j++) x+=A[i][j]*b[j];
        cout << x <<endl;
    }
    return 0;
}
