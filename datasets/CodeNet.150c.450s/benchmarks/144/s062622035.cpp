#include<iostream>
using namespace std;
int main(){

long n,m,l;
cin>>n>>m>>l;

long a[n][m];
long b[m][l];

/*a,b入力*/

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}

for(int i=0;i<m;i++){
    for(int j=0;j<l;j++){
        cin>>b[i][j];
    }
}

/*c初期化*/

long c[n][l];

for(int i=0;i<n;i++){
    for(int j=0;j<l;j++){
        c[i][j]=0;
    }
}

/*計算*/

for(int g=0;g<n;g++){
    for(int h=0;h<l;h++){
        for(int i=0;i<m;i++){
            c[g][h]+=a[g][i]*b[i][h];
        }
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<l-1;j++){
        cout<<c[i][j]<<" ";
    }
    cout<<c[i][l-1]<<endl;
}


}
