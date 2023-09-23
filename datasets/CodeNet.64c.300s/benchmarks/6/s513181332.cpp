#include<iostream>
using namespace std;
int main(){
    int house[4][3][10]={{{}}};
    int n;
    int a,b,c,d;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b >> c >> d;
        house[a-1][b-1][c-1] += d;
    }
    for(int j=0;j<4;j++){
        for(int k=0;k<3;k++){
            for(int l=0;l<10;l++){
                cout << " " << house[j][k][l];
            }
            cout << endl;
        }
        if(j<3) cout << "####################" << endl;
    }
    return 0;
}
