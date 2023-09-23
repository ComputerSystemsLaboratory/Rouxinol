#include<iostream>
using namespace std;
int main(){
    int count[4][3][10];
    int b,f,r,v,i,ii,iii,iiii,n;
    for(i=0;i<4;++i){
        for(ii=0;ii<3;++ii){
            for(iii=0;iii<10;++iii){
                count[i][ii][iii]=0;
            }
        }
    }
    cin>>n;
    for(i=0;i<n;++i){
        cin>>b>>f>>r>>v;
            count[b-1][f-1][r-1]=v+count[b-1][f-1][r-1];
    if(count[b-1][f-1][r-1]>9){
        count[b-1][f-1][r-1]=9;
    }
    if(count[b-1][f-1][r-1]<0){
        count[b-1][f-1][r-1]=0;
    }
}
    for(i=0;i<4;i++){
    for(ii=0;ii<3;ii++){
        for(iii=0;iii<10;iii++){
            if(iii==9){
                cout<<count[i][ii][iii];
            }
            else if(iii==0){
                cout<<" "<<count[i][ii][iii]<<" ";
            }
            else{
                cout<<count[i][ii][iii]<<" ";
            }
        }
        cout<<endl;
    }
        if(i<3){
            cout<<"####################"<<endl;}
    }
    return 0;
}