#include <iostream>
using namespace std;

int main(){
    int room[4][3][10]={};//4(x)棟3(y)階10(z)番目にroom[x][y][z]人
    int n,bld,flr,num,psn;//building(x),floor(y),number(z),person(人)
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>bld>>flr>>num>>psn;
        room[bld-1][flr-1][num-1]+=psn;
    }
    
    for(int x=0;x<4;x++){
        for(int y=0;y<3;y++){
            for(int z=0;z<10;z++){
                cout<<" "<<room[x][y][z];
            }
            cout<<endl;
        }
        if(x==3)break;
        cout<<"####################\n";
    }
    
    return 0;
}

