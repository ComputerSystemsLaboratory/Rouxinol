#include<iostream>
using namespace std;
int main(){
    int x,y,temp;
    while(1){
        cin >> x >> y;
        if(x==0 && y==0){
            return 0;
        }
        if(x>y){
            temp=x;
            x=y;
            y=temp;
        }
        cout << x << " " <<  y << endl;
    }
}
