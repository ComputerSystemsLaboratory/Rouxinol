#include<iostream>
using namespace std;
int main(){
    int x,y;
    while(true){
        cin >> x >> y;
        if(x==0 && y==0){
            break;
        }
        else if(x<=y){
            cout << x <<" " << y <<endl;
        }
        else if(x>y){
            cout << y << " " << x <<endl;
        }
    }
    return 0;
}
