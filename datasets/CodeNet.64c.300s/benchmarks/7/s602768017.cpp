#include <iostream>
using namespace std;
int main(){
    int C[4][14]={0};
    int n;
    cin>>n;
    char X;
    for(int i=0;i<n;i++){
        int x,y;
        
        cin>>X;
     if(X == 'S'){
        x=0;
     }else if(X=='H'){
        x=1;
}else if(X =='C'){
        x=2;
     }else{
            x=3;
        }
        cin>>y;
        C[x][y] =1;
    }
    for(int x=0;x<4;x++){
        for(int y=1;y<14;y++){
            if( !(C[x][y] ==1)){
                switch(x){
                    case 0: cout<<"S "<<y<<endl; break;
                    case 1: cout<<"H "<<y<<endl; break;
                    case 2: cout<<"C "<<y<<endl; break;
                    case 3: cout<<"D "<<y<<endl; break;
                }
            }
        }
    }
return 0;
}           