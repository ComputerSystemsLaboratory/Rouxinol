#include <iostream>

using namespace std;

int main()
{
    int n,m,l;
    cin>> n>> m>>l;
    long long a[n][m],b[m][l],c[n][l];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            cin >> b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            c[i][j]=0;
        }
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            for(int k=0;k<m;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            if(j==0){
                cout << c[i][j];
            }
           else {cout << " "<< c[i][j];
           }

        }
        cout << endl;
    }
    return 0;
}

