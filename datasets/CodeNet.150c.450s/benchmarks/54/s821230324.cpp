#include <iostream>
#include <string>

using namespace std;

int main(){

    string W, T;
    int cnt=0;

    cin >> W;

    for(int i=0; W[i]; i++){
        if(W[i] >= 'A' && W[i] <= 'Z') W[i]+= 'a' - 'A';
    }

    while(1){
        cin >> T;        
        if(T == "END_OF_TEXT") break;

        for(int i=0; T[i]; i++){
            if(T[i] >= 'A' && T[i] <= 'Z') T[i]+= 'a' - 'A';
        }
        if(W == T) cnt++;
    }    

    cout << cnt << endl;

    return 0;
}