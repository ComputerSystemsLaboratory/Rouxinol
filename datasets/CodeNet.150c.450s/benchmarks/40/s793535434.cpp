#include <iostream>
#include <string>
using namespace std;

class Dice{
private:
    int d[6];
public:
    Dice(int n0, int n1, int n2, int n3, int n4, int n5){ //Constructor
        d[0]=n0; d[1]=n1; d[2]=n2; d[3]=n3; d[4]=n4; d[5]=n5;
    }
    int get_top(){
        return d[0];
    }
    void Roll(){
        string op;
        cin >> op;
        for(unsigned int i=0;i<op.length();i++){
            switch(op[i]){
                case 'N': RollN(); break;
                case 'E': RollE(); break;
                case 'W': RollW(); break;
                case 'S': RollS(); break;
            }
        }
    }
    void RollN(){
        int tmp=d[0];
        d[0]=d[1];
        d[1]=d[5];
        d[5]=d[4];
        d[4]=tmp;
    }
    void RollE(){
        int tmp=d[0];
        d[0]=d[3];
        d[3]=d[5];
        d[5]=d[2];
        d[2]=tmp;
    }
    void RollW(){
        int tmp=d[0];
        d[0]=d[2];
        d[2]=d[5];
        d[5]=d[3];
        d[3]=tmp;
    }
    void RollS(){
        int tmp=d[0];
        d[0]=d[4];
        d[4]=d[5];
        d[5]=d[1];
        d[1]=tmp;
    }
};

int main(){
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    Dice di(a, b, c, d, e, f);
    di.Roll();
    cout << di.get_top() << endl;
    return 0;
}