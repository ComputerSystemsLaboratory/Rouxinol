#include <iostream>

using namespace std;

int func(int d){
    int rectangle;
    int n = d;
    int total = 0;
    
    while(n < 600){
        rectangle = n*n*d;
        total += rectangle; 
        n += d;
    }
    
    return total;
}


int main (int argc, char const* argv[]){
    int n;
    
    
    while((cin >> n)){
        cout << func(n) << endl;
        
    }
    
    
    return 0;
}