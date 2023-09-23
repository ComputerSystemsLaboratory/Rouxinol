#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[100][100],retu[100]={0},gyou[100]={0},sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
            retu[i] += a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            gyou[i] += a[j][i];
        }
        sum = sum+gyou[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j] << " ";
        }
        cout << retu[i] << endl;
    }
    for(int i=0;i<m;i++)cout << gyou[i] << " ";
    cout << sum << endl;
    
    
}

