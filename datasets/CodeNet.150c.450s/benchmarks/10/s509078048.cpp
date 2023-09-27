#include<iostream>
using namespace std;

int main(){
    int n;
    int B,F,R,V;
    int v[4][3][10] = {};
    
    cin >> n;
    
    for(int i=1;i<=n; i++){
        cin >> B >> F >> R >>V;
        v[B-1][F-1][R-1] += V;
    }
    
    for(int i = 0;i<=3;i++){
        for(int j = 0;j<=2;j++){
            for(int k = 0;k<=9;k++){
                cout<< " " << v[i][j][k];
            }
            cout << endl;
        }
        if(i<3) cout << "####################" << endl;
    }

}