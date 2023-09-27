#include <iostream>
using namespace std;
int main(){
    int dice[6];
    int n;
    int x,y;
    for(int i=0;i<6;i++){
        cin>>dice[i];
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if((x==dice[3] && y==dice[1]) || (x==dice[4] && y==dice[3]) || (x==dice[2] && y==dice[4]) ||(x==dice[1] && y==dice[2])){
            cout<<dice[0]<<endl;
        }
        else if((x==dice[0] && y==dice[3]) || (x==dice[3] && y==dice[5]) || (x==dice[5] && y==dice[2]) || (x==dice[2] && y==dice[0])){
            cout<<dice[1]<<endl;
        }
        else if((x==dice[0] && y==dice[1]) || (x==dice[1] && y==dice[5]) || (x==dice[5] && y==dice[4]) || (x==dice[4] && y==dice[0])){
            cout<<dice[2]<<endl;
        }
        else if((x==dice[0] && y==dice[4]) || (x==dice[4] && y==dice[5]) || (x==dice[5] && y==dice[1]) || (x==dice[1] && y==dice[0])){
            cout<<dice[3]<<endl;
        }
        else if((x==dice[0] && y==dice[2]) || (x==dice[2] && y==dice[5]) || (x==dice[5] && y==dice[3]) || (x==dice[3] && y==dice[0])){
            cout<<dice[4]<<endl;
        }
        else if((x==dice[2] && y==dice[1]) || (x==dice[1] && y==dice[3]) || (x==dice[3] && y==dice[4]) || (x==dice[4] && y==dice[2])){
            cout<<dice[5]<<endl;
        }
    }
return 0;
}
