#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    
    int num,a,b,c;
    cin >> num;
    
    for(int ii=0;ii<num;ii++){
        cin >> a >> b >> c;
        
        if(a * a + b * b == c * c){
            cout << "YES" << endl;
        }
        else if(a * a + c * c == b * b){
            cout << "YES" << endl;
        }
        else if(b * b + c * c == a * a){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}