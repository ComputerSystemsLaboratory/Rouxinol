#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count[5][4][11];
    for(int i=1;i<=4;i++){
        for(int j=1;j<=3;j++){
            for(int k=1;k<=10;k++){
                count[i][j][k]=0;
            }
        }
    }  
    int b,f,r,v;
    for (int i=0;i<n;i++){
       cin >> b >> f >> r >> v;
       count[b][f][r] += v;
    }

    for(int i=1;i<=4;i++){
       for(int j=1;j<=3;j++){
            for(int k=1;k<=10;k++){
                cout  << " "<< count[i][j][k];
            }
            cout << endl;
        }
          if(i<4){
            for(int l=0;l<20;l++){
                cout << "#";
            }
            cout << endl;
            }
    }
        return 0;
}
