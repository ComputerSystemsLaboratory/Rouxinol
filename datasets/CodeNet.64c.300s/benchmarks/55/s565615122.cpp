#include <iostream>
using namespace std;

int main(){
    
    int in;
    int num = 1;
    while(1){
        
        cin >> in;
        
        if(in == 0){
            break;
        }
        
        cout << "Case " << num << ": " << in << endl;
        
        num++;
    }
    
    
    return 0;
    
}