#include <iostream>
using namespace std;

int main(void){
    
    int a[3001] = {0};
    int b[3001] = {0};
    
    int setNum = 0;

    for(int i = 0 ; i < 3001 ; i++){
        cin >> a[i] >> b[i];
    
        if( (a[i] == 0) && (b[i] == 0) ){
            setNum = i - 1;
            break;
        }
    }
    
    for(int i = 0 ; i <= setNum ; i++){
        int smale = 0;
        int large = 0;
        (a[i] < b[i]) ? (smale = a[i],large = b[i]) : (smale = b[i],large = a[i]);
        cout << smale << ' ' << large << endl;
    }

    return 0;
}