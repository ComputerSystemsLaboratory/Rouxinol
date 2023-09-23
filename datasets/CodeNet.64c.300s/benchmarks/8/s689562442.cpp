#include <iostream>
using namespace std;

int GetDigit(int num){
    int digit=0;
    while(num!=0){
        num /= 10;
        digit++;
    }
    return digit;
}

int main(){
    int n, dig;
    int x;
    
    cin >> n;
    //331 is overlaps
    for(int i = 3; i <= n; i++){
        dig = GetDigit(i);
        if((i % 3) == 0){
            cout << " " << i;
        }
        else{
            x = i;
            if((x % 10) == 3){
                cout << " " << i;
            }
            else{
                for(int j = 0; j < dig; j++){
                    x /= 10;
                    if((x % 10) == 3){
                        cout << " " << i;
                        break;
                    }
                }
            }
        }
        
    }
    
    cout << endl;
    
    return 0;
    
}
