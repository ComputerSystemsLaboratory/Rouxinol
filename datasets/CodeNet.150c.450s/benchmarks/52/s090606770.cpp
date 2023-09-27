#include <iostream>

using namespace std;

int main(){
    int track[10], c, num;
    while(1){
        cin >> num;
        if(!num){
            if(!c) break;
            else cout << track[c--] <<endl;
        }
        else{
            if(c==10) cout << "Already Full" <<endl;
            else track[++c] = num;
        }
    }
    return 0;
}