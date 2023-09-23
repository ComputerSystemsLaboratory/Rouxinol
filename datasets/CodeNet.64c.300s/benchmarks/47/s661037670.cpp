#include <iostream>
using namespace std;

int main(){
    int table[101] = {0};
    int n, tmp;
    
    while(cin >> n){
        table[n]++;
    }
    
    for(int i = 1;i <= 100;i++){
        if(table[i] > tmp){
            tmp = table[i];
        }
    }
   
    for(int i = 1;i <= 100;i++){
        if(tmp == table[i]){
            cout << i << endl;
        }
    }
          
    return 0;
}