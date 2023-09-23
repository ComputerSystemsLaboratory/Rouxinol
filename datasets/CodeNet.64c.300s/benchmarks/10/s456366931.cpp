#include <iostream>
using namespace std;

int main(){
    
    while(true){
        int a, b;
        cin >> a >> b;
        if(a==0&&b==0){
            break;
        }else{
            cout << min(a, b) << " " << max(a, b) << endl;
        }
    }
    
    return 0;
}