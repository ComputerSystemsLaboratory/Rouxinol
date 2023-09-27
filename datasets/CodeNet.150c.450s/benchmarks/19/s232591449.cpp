#include <iostream>
using namespace std;
int main(void){
    int x,y;
    for(;;){
        cin>>x>>y;
        if(x==0&&y==0){
            break;
        }
        if(x>y){
            swap(x,y);
    }
        cout<<x<<" "<<y<<endl;
    }
}

