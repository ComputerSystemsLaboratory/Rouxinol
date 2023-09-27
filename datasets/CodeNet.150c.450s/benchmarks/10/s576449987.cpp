#include<iostream>
using namespace std;
int main(){
    int b,f,r,v,n,i,k,l,m,max[5][4][11]{0};
    cin>>n;
    for(i=0;i<n;i++){
        cin>>b>>f>>r>>v;
        if(r>0){
            max[b][f][r]=max[b][f][r]+v;
        }
    }
    for(k=1;k<=4;k++){
        if(k!=1){
        cout<<"####################"<<endl;
        }
        for(l=1;l<=3;l++){
            for(m=1;m<=10;m++){
                cout<<" "<<max[k][l][m];
            }
            cout<<endl;
        }
    }
    
    return 0;
}