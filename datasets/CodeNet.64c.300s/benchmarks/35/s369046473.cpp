#include<iostream>
using namespace std;
int main(){
        int n, m, k, r;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
                        a[i][j] = 0;
        for(int i=0;i<n;i++){
                cin>>r;
                cin>>m;
                for(int j=0;j<m;j++){
                        cin>>k;
                        a[r-1][k-1] = 1;
                }
        }
        for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                        cout<<a[i][j];
                        if(j<n-1) cout<<" ";
                        else cout<<endl;
                }
        }
        return 0;
}
