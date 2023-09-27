#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    int  n = 0,a=0,b=0,c=0,d=0,i=0,j=0,k=0;
    cin >> n;
    int x[10][3][4]={};
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            for(k=0;k<10;k++){
                x[k][j][i]={};
            }
        }
    }

        for(i=0;i<n;i++){
            cin >> a >> b >> c >> d;
            x[c-1][b-1][a-1]+=d;
            }


        for(i=0;i<4;i++){
            for(j=0;j<3;j++){
                for(k=0;k<10;k++){
                    cout << ' ' << x[k][j][i];
                }
                cout << endl;
            }
            if(i<3){
            cout << "####################" << endl;
            }
        }




    //cout << endl;

return 0;

}