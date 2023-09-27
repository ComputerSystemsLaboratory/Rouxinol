#include<iostream>
using namespace std;

class Dice{
    public:
    int f[6];
    Dice(){}
    void roll_x(){roll(1,4,6,3);} // to E
    void roll_y(){roll(1,2,6,5);} // to N
    void roll_z(){roll(2,3,5,4);} // 上から見て時計回り
    void roll(int i,int j,int k,int l){
        int t=f[i]; f[i]=f[j]; f[j]=f[k]; f[k]=f[l]; f[l]=t;
    }
    void move(char ch){
        if(ch == 'E') roll_x();
        if(ch == 'S') for(int i=0;i<3;i++) roll_y();
        if(ch == 'W') for(int i=0;i<3;i++) roll_x();
        if(ch == 'N') roll_y();
    }
};

int main(){
    Dice d;
    string name;
    
    for(int i=1;i<=6;i++) cin >> d.f[i];
    cin >> name;
    for(int i=0;i<name.size();i++) d.move(name[i]);
    cout << d.f[1] << endl;
    return 0;
}
