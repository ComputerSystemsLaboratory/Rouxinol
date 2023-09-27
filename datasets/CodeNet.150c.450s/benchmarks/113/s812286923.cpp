#include <iostream>
using namespace std;
int x;
int main(void){
    for(int i=1;i<10005;i++){
        cin>>x;
        if(x==0) return 0;
        cout<<"Case "<<i<<':'<<" "<<x<<endl;
    }
    
}

