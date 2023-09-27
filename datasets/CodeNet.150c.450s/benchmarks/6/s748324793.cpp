#include<iostream>
using namespace std;

int main(){
    
    int a,b,c;
    
    cin >> a >> b >>c;  
     if(a >= b){
         cout << "No" << endl;
         return 0;
     }
     if(c <= b){
         cout << "No" << endl;
         return 0;
     }
    cout << "Yes" << endl;
    
    return 0;
}