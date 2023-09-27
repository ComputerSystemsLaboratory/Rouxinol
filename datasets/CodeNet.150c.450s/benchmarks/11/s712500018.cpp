#include <iostream>
#include <vector>

using namespace std;
vector <vector <bool> > card (4,vector <bool>(13,false));
int n;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        char a;
        int b;
        cin>>a>>b;
        if(a=='S') {card[0][b-1]=true;}
        if(a=='H') {card[1][b-1]=true;}
        if(a=='C') {card[2][b-1]=true;}
        if(a=='D') {card[3][b-1]=true;}
        
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++){
            if(!card[i][j]){
                if(i==0) cout<<"S"<<" "<<j+1<<endl;
                if(i==1) cout<<"H"<<" "<<j+1<<endl;
                if(i==2) cout<<"C"<<" "<<j+1<<endl;
                if(i==3) cout<<"D"<<" "<<j+1<<endl;
            }
        }
    }
}