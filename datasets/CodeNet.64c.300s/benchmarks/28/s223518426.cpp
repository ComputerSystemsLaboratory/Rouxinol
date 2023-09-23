#include<iostream>
using namespace std;

int main(){
    int W,H,X,Y,r;
    cin >> W >> H >> X >> Y >> r;
    if(X+r>W||X-r<0||Y+r>H||Y-r<0){
        cout <<"No" <<endl;
    }
    else{
        cout <<"Yes"<<endl;
    }
    return 0;
}
