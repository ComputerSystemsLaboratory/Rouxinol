#include <iostream>
using namespace std;
int main(void){
    // Here your code !
    int n = 1;
    int pay ;

    
    while (n){
        int cent = 0;
        
        cin >>n;
        if (n==0){
            break;
        }
    

    
    pay = 1000 - n;
    
    if (pay >= 500){
        pay -= 500;
        cent++;
    }
    
    while (pay >= 100){
        pay -= 100;
        cent++;
    }
    
    while (pay >= 50){
        pay -= 50;
        cent++;
    }
    
    while (pay >= 10){
        pay -= 10;
        cent++;
    }
    
    while (pay >= 5){
        pay -= 5;
        cent++;
    }
    
    while (pay >= 1){
        pay -= 1;
        cent++;
    }
    
    cout << cent << "\n";
 
    
    }
    return 0;

}