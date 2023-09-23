#include <iostream>
using namespace std;
int main(){
    int x,a=1;
    while(cin>>x){
        if(x==0){
            break;
        }
        cout<<"Case "<<a<<": "<<x<<endl;
        ++a;
    }
    return 0;
}

