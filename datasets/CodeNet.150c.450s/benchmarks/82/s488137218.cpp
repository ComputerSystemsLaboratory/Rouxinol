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
    int n,x,y;
    for(int i=1;i<=6;i++) cin >> d.f[i];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        while(d.f[1]!=x){
            d.move('E');
            if(d.f[1]==x) break;
            d.move('N');
        }
        while(d.f[2]!=y){
            d.roll_z();
        }
        cout << d.f[3] << endl;
    }
    return 0;
}
