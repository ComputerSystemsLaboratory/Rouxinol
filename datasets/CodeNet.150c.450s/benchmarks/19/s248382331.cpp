#include<iostream>
using namespace std;

int main(){
    int x,y;
    while(cin>>x>>y && (x!=0 || y!=0)){
        if (x>y){
            cout << y << " " << x << endl;
        } else {
            cout << x << " " << y << endl;
        }
    }
    return 0 ;
}
