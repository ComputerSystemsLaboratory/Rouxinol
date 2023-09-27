#include <iostream>
#include <cmath>
//#include <string>
using namespace std;
int main(){
   

    
    int in[4][13];
    int n;
    cin>>n;
    for(int i=0;i<4;i++){
        for(int j=0;j<14;j++){
            in[i][j]=0;
        }
    }
    
    for(int i=0;i<n;i++){
        char tora;
        int num;
        cin>>tora>>num;
        if (tora=='S') {
            in[0][num-1]=1;
        }
        else if(tora=='H'){
            in[1][num-1]=1;
        }
        else if(tora=='C'){
            in[2][num-1]=1;
        }
        else if(tora=='D'){
            in[3][num-1]=1;
        }
    }
    
    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++){
            
            
            if(in[i][j]==0){
                if(i==0){
                    cout<<'S'<<' '<<j+1<<endl;
                }else if(i==1){
                    cout<<'H'<<' '<<j+1<<endl;
                    
                }else if(i==2){
                    cout<<'C'<<' '<<j+1<<endl;
                    
                }else if(i==3){
                    cout<<'D'<<' '<<j+1<<endl;
                    
                }
                
            }
            
            
            
            
        }
    }
    return 0;

}

