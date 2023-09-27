#include <iostream>
#include <cmath>
//#include <string>
using namespace std;
int main(){
   
    int heya[4][3][10];
    for(int i=0;i<4;i++){
        for(int u=0;u<3;u++){
        for(int j=0;j<10;j++){
            heya[i][u][j]=0;
        }
        }
    }
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        heya[a-1][b-1][c-1]+=d;
    }
    
    for(int i=0;i<4;i++){
        for(int u=0;u<3;u++){
            for(int j=0;j<10;j++){
                cout<<' '<<heya[i][u][j];
                
            }
            cout<<endl;
        }
        if(i!=3){for(int y=0;y<20;y++){
            cout<<'#';
        }
        
            cout<<endl;    }}
    return 0;
}

