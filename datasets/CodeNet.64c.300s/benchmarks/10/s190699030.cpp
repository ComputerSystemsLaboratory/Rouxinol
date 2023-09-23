#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int x,y;
    for (int i=0;i<=3000;i++){
        cin>>x>>y;
        if (x==0 && y==0){
            break;
        }
        else if (x>=y){
            cout<<y<<" "<<x<<endl;
        }
        else if (x<y){
            cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}

