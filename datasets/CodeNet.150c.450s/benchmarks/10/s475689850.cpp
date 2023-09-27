#include <iostream>
using namespace std;

int main(){
    int n,b,f,r,v;
    cin >> n;
    int a[5][4][11];
    for (int i=1;i<=4;i++){
        for(int j=1;j<=3;j++){
            for(int k=1;k<=10;k++){
                a[i][j][k]=0;
            }
        }
    }
    
    for (int i=0;i<n;i++){
        cin >> b >> f >> r >>v;
        a[b][f][r] += v;
        if (a[b][f][r]<0){
            a[b][f][r]=0;
        }
        else if(a[b][f][r]>9){
             a[b][f][r]=9;
        }
    }
    
    for (int i=1;i<=3;i++){
        for (int j=1;j<=10;j++){
            cout << " " << a[1][i][j];
        }
        cout << endl;
    }
    cout << "####################"<<endl;
    
    for (int i=1;i<=3;i++){
        for (int j=1;j<=10;j++){
            cout << " " << a[2][i][j];
        }
        cout << endl;
    }
    cout << "####################"<<endl;
    
    for (int i=1;i<=3;i++){
        for (int j=1;j<=10;j++){
            cout << " " << a[3][i][j];
        }
        cout << endl;
    }
    cout << "####################"<<endl;
    
    for (int i=1;i<=3;i++){
        for (int j=1;j<=10;j++){
            cout << " " << a[4][i][j];
        }
        cout << endl;
    }
    
    return 0;
}
