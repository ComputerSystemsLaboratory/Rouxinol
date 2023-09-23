#include <iostream>
using namespace std;

int main(){
    const int m[6] = {500,100,50,10,5,1};
    int price;
    
    while(true){
        cin >> price;
        if(!price) break;
        
        int change = 1000 - price,cnt = 0;
        for(int i = 0 ; i < 7 ;){
            if(change >= m[i]){
                change -= m[i];
                cnt++;
            }
            else i++;
            
            if(!change) break;
        }
        cout << cnt << endl;
    }
    
    return 0;
}