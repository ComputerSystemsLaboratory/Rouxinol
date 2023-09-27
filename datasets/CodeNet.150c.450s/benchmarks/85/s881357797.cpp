#include<iostream>
#include<algorithm>
using namespace std;
int main(){
        int n;
        cin>>n;
        int r[n], c[n], a[n][n];
        for(int i=0;i<n;i++) cin>>r[i]>>c[i];
        for(int i=0;i<n;i++)
                a[i][i] = 0;

        for(int i=1;i<n;i++){
                for(int j=0;j+i<n;j++){
                        a[j][j+i] = 2000000000;
                        for(int k=0;k+1<=i;k++)
                                a[j][j+i] = min(a[j][j+i], a[j][j+k]+a[j+k+1][j+i] + r[j]*c[j+k]*c[j+i]);
                }
        }
        cout<<a[0][n-1]<<endl;
        return 0;
}
