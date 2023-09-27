#include <iostream>
using namespace std;

class Dice {
    int num[6];
    public:
        void set(int n, int d){
            num[n] = d;
        }
        
        void roll(char c){
            if(c == 'N'){
                swap(num[0],num[1]);
                swap(num[1],num[5]);
                swap(num[5],num[4]);
            }else if(c == 'W') {
                swap(num[0],num[2]);
                swap(num[2],num[5]);
                swap(num[5],num[3]);
            }else if(c == 'S') {
                swap(num[0],num[4]);
                swap(num[4],num[5]);
                swap(num[5],num[1]);
            }else{
                swap(num[0],num[3]);
                swap(num[3],num[5]);
                swap(num[5],num[2]);
            }
        }
        
        int up(){
            return num[0];
        }
};

int main(){
    Dice d;
    int num;
    string order;
    for(int i=0;i<6;i++){
        cin >> num;
        d.set(i,num);
    }
    cin >> order;
    for(int i=0;i<order.length();i++){
        d.roll(order[i]);
    }
    cout << d.up() << endl;
}
