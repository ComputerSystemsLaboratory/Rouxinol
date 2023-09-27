#include <iostream>
#include <cmath>
//#include <string>
using namespace std;
int main(){

    int r,c;
    cin>>r>>c;
    int hyou[r+1][c+1];
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c+1;j++){
            if(j!=c){
                cin>>hyou[i][j];
                sum+=hyou[i][j];
            }else{
                hyou[i][j]=sum;
            }
        }
    }
    for(int i=0;i<c+1;i++){
      int  sum=0;
        for(int j=0;j<r+1;j++){
            if(j!=r){
                sum+=hyou[j][i];
            }else{
                hyou[j][i]=sum;
            }
        }
    }
    
    
    for(int i=0;i<r+1;i++){
        for(int j=0;j<c+1;j++){
           if(j!=c) cout<<hyou[i][j]<<' ';
           else cout<<hyou[i][j]<<endl;
        }
    }
    
    
    
    
    return 0;
}

