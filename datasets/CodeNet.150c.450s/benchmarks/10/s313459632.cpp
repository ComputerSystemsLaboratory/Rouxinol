#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i,j,k;

    int buil[4][3][10]; //棟目, 階数, 部屋番号
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            for(k=0;k<10;k++){
                buil[i][j][k] = 0;
            }
        }
    }

    int n,b,f,r,v;
    cin >> n;

    for(i=0;i<n;i++){
       cin >> b >> f >> r >> v; 
       buil[b-1][f-1][r-1] += v;
    }

    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            for(k=0;k<10;k++){
                cout << " " << buil[i][j][k];
                if(k==9){
                    cout << endl;
                }
            }
            if(j==2 && i!=3){
                cout << "####################" << endl;
            }

        }
    }
    return 0;
}

