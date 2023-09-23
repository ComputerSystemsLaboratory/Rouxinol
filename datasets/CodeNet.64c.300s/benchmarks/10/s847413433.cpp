#include <iostream>
#include <string>

using namespace std;

int main(){
	
    while(true){
        int a,b;
        cin>>a>>b;
        if(a==0&&b==0)break;
        if(a>=b){
            cout<<b<<' '<<a<<endl;
        }else{
            cout<<a<<' '<<b<<endl;
            
        }
    }

}
