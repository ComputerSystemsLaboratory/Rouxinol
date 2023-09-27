#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstdio>
using namespace std;

int main(){
    string W, T;
    int count = 0;
    
    cin >> W;
    transform(W.begin(), W.end(), W.begin(), ::toupper); 
    
    while(1){
        cin >> T;
        if(T == "END_OF_TEXT"){
            break;
        }
        
        transform(T.begin(), T.end(), T.begin(), ::toupper); 
        if(T == W){
            count++;
        }
    }
    cout << count << endl;
   return 0;
}