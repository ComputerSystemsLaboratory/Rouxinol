#include <iostream>
#include <string>
using namespace std;

int main(){
    string C, temp;
    int i, j, n, h;
    
    while(1){
        cin >> C;
        if(C[0] == '-'){
            break;
        }
        
        cin >> n;
        for(i = 0; i < n; i++){
            temp = C;
            cin >> h;
            
            for(j = h; j < C.size(); j++){
                C[j-h] = temp[j];
            }
                
            for(j = 0; j < h; j++){
                C[C.size() - h +j] = temp[j];
            }
        }
        cout << C << endl;
    }
    return 0;
}