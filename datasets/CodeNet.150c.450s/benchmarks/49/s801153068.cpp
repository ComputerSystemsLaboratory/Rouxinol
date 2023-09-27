#include <iostream>
using namespace std;
int main(){
    int a, b, c, d, max, min;
    
    while(1){c = 0;
        max = 0;
        min = 2000000000;
        cin >> a;
        if(a == 0){break;}
        for(int i=0;i<a;i++){
            cin >> b;
            if(b>max){
                max = b;
            }
            if(b<min){
                min = b;
            }
            c = c + b;
        }
        c = c - max - min;
        d = c / (a-2);
        cout << d << endl;
    }
    
    
    
    
    
    
    return 0;

}