#include<iostream>
using namespace std;
int main(){
    
    int i = 1;
    int n;
    
    while (1){
        cin >> n;
        
        if (n == 0) break;
        
        
        cout <<"Case"<<" "<< i <<": "<< n <<endl;
        
        i++;
    }
    
    return 0;
}
