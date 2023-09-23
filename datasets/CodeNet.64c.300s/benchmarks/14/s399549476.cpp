#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a,b;
    string str;
    cin >> a >> b ;
   
    if(a>b){
        str = " > ";
        
    }else if(a<b){
            
        str = " < ";
        
    }else{
        str = " == ";
    }
        
    
    cout << "a" << str  << "b" << endl;
    
    return 0;
}