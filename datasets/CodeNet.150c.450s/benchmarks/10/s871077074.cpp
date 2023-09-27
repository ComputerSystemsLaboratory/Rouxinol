#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int b,f,r,v;

    int one[3][10];
    int two[3][10];
    int three[3][10];
    int four[3][10];

    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            one[i][j]=0;
            two[i][j]=0;
            three[i][j]=0;
            four[i][j]=0;
        }
    }

    for(int i=0;i<n;i++){
        cin>>b>>f>>r>>v;
        if(b==1){
            one[f-1][r-1]+=v;
        }else if(b==2){
            two[f-1][r-1]+=v;
        }else if(b==3){
            three[f-1][r-1]+=v;
        }else {
            four[f-1][r-1]+=v;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            if(one[i][j]<0)one[i][j]=0;
            if(two[i][j]<0)two[i][j]=0;
            if(three[i][j]<0)three[i][j]=0;
            if(four[i][j]<0)four[i][j]=0;
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<10;k++){
                if(i==0)     cout<<" "<<one[j][k];
                else if(i==1)cout<<" "<<two[j][k];
                else if(i==2)cout<<" "<<three[j][k];
                else         cout<<" "<<four[j][k];
            }
            cout<<endl;
        }
        if(i<3)cout<<"####################"<<endl;
    }
    return 0;
}

