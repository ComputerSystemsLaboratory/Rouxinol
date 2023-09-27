#include <iostream>
using namespace std;
int main(void){
    
    int x;
    
    //繰り返し処理をするときは「　for文　」を使う
    for(int i=1; i<=10000; i++){
        cin >> x;
        if(x != 0){
            cout << "Case " << i << ": " << x << endl;
        }
        else{
            break;
        }
    }
    
    return 0;
    
}
