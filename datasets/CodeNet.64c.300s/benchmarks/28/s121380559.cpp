#include <iostream>
using namespace std;
int main(void){
    int W, H, x, y, r;
    cin >> W;
    cin >> H;
    cin >> x;
    cin >> y;
    cin >> r;
    
    if((x-r)>=0&&(x+r)<=W){
        if((y-r)>=0&&(y+r)<=H){
            cout << "Yes";
        }else{
            cout << "No";
    }}else{
        cout << "No";
    }
    cout << endl;
    
}

