#include<iostream>
#include<string>
using namespace std;
int main(){
    string h_card,t_card;
    int n,hanako,taro;
    hanako = 0;
    taro = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> t_card >> h_card;
        if(t_card > h_card){
            taro += 3;
        }
        else if(t_card == h_card){
            taro ++;
            hanako ++;
        }
        else{
            hanako += 3;
        }
        
    }
    cout << taro << " " << hanako << endl;
    
    return 0;
}
