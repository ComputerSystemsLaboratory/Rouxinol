#include<iostream>
#include<vector>
using namespace std;
int main(){
    int i,j,n,m,temp;
    vector< vector <int> > a;
    vector<int> b;
    cin>> n>> m;
    a.resize(n);
    b.resize(m);
    for(i=0;i<n;i++){
        a[i].resize(m);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            a[i][j]=0;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>> a[i][j];
        }
    }
    for(j=0;j<m;j++){
        cin>> b[j];
    }
    for(i=0;i<n;i++){
        temp=0;
        for(j=0;j<m;j++){
            temp+=a[i][j]*b[j];
        }
        cout<< temp<< endl;
    }
    
    return 0;
}