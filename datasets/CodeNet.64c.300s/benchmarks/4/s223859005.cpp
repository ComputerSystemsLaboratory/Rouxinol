#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    
    if(!(0<=a&&c<=100)) cout<<"No"<<endl;
    
    if(a<b&&b<c) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
