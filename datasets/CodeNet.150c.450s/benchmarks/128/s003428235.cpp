#include <iostream>
using namespace std;
int main(){
    int i=0;
    char a[20],x;
    
    while(cin>>x){
        a[i]=x;
        i++;
        if(i>=20)break;
    }
    
    for(int f=i-1;f>=0;f--){
        cout<<a[f];
    }
    
    cout<<endl;
}