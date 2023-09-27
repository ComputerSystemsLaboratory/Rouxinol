#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int H[n+1];//インデックス0は欠番。
    for(int i=0;i<n;i++)cin>>H[i+1];

    //順に出力していく
    for(int j=1;j<n+1;j++){
        cout<<"node "<<j<<": key = "<<H[j]<<", ";
        if(j/2 > 0){//親のkeyが存在しているか
            cout<<"parent key = "<<H[j/2]<<", ";
        }
        if(2*j < n+1){//左の子の存在性
            cout<<"left key = "<<H[2*j]<<", ";
        }
        if(2*j+1 < n+1){//右の子の存在性
            cout<<"right key = "<<H[2*j+1]<<", ";
        }
        cout<<endl;
    }
    return 0;
}
