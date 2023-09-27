#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    if(x<y){
        swap(x,y);
    }
    while(1){
        if(x%y==0)break;
        x=x%y;
        if(x<y){
            swap(x,y);
        }
    }
    cout<<y<<endl;
    return 0;
}
