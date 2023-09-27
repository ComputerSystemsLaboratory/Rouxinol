#include <iostream>
using namespace std;
int main(void){
    int n;
    cin>>n;
    int room[4][3][10]={};
    int b,f,r,v;
    for(int i=1;i<=n;i++){
        cin>>b>>f>>r>>v;
        room[b-1][f-1][r-1]+=v;
    }
    for(int i=0;i<=3;i++){
        for(int j=0;j<=2;j++){
            for(int k=0;k<=9;k++){
                cout<<" "<<room[i][j][k];
            }
            cout<<endl;
        }
        if(i==3)break;
        for(int k=1;k<=20;k++){
            cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}