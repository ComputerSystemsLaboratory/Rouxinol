#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int a=0,b=0,c=0,i=0;
    double d=0;
    
    cin>>a>>b>>c;

    
    for(int x=a;x<=b;++x){
        d=c%x;
        if(d==0){
            ++i;
        }
    }
    
    cout<<i<<endl;
  
    return 0;
 
}