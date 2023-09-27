#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string W;
    string T;
    int NumberOfW = 0;
 
    cin >> W;
 
    while(1){
        cin >> T;
        if(T=="END_OF_TEXT")break;
        for(int i=0; i<T.size(); i++){
            if(T[i] >= 'A' && T[i] <= 'Z'){
                T[i] += 'a' - 'A';
            }
        }
        if(T==W)NumberOfW++;
    }
 
    cout << NumberOfW << endl;
    return 0;
}